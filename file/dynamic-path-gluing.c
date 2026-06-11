#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PATH 1024

struct threeNum {
  int n1, n2, n3;
};

int main() {
  int n;
  struct threeNum num;
  FILE *fptr;

  FILE *cfg = fopen("config.txt", "r");
  if (cfg == NULL) {
    perror("Error: file config.txt not found");
    return 1;
  }

  char folder_path[MAX_PATH];
  if (fgets(folder_path, sizeof(folder_path), cfg) == NULL) {
    perror("read");
    fclose(cfg);
    return 1;
  }
  fclose(cfg);

  folder_path[strcspn(folder_path, "\r\n")] = 0;

  char *file1 = "test";
  char full_path[MAX_PATH];

  snprintf(full_path, sizeof(full_path), "%s/%s", folder_path, file1);
  printf("Path 1: %s\n", full_path);

  if ((fptr = fopen(full_path, "rb")) == NULL) {
    printf("Error! opening file");
    exit(1);
  }

  // Moves the cursor to the end of the file
  fseek(fptr, -sizeof(struct threeNum), SEEK_END);

  for (n = 1; n < 5; ++n) {
    fread(&num, sizeof(struct threeNum), 1, fptr);
    printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
    fseek(fptr, -2 * sizeof(struct threeNum), SEEK_CUR);
  }
  fclose(fptr);

  return 0;
}
