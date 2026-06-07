#include <stdio.h>
#include <string.h>

void reverse_string(const char *src, char *dst) {
  int len = strlen(src);

  for (int i = len - 1, j = 0; i >= 0; i--, j++) {
    dst[j] = src[i];
  }
  dst[len] = '\0';
}

int main() {
  char str[50];
  char reverse_str[50];

  printf("Write str: ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';

  reverse_string(str, reverse_str);

  printf("reverse_str: ");
  puts(reverse_str);
  return 0;
}
