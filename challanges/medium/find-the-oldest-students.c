#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
  char name[50];
  int age;
  float grade;
};

void flush_stdin();
void read_name(char *buf, int size);
int find_oldest_student(struct Student students[], int size);

int main() {
  int i, n, c;

  printf("Enter the number of students: ");
  if (scanf("%d", &n) != 1) {
    return 1;
  }

  flush_stdin();

  if (n <= 0) {
    return 1;
  }

  struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

  if (students == NULL) {
    printf("Error: Failed to allocate memory!\n");
    return 1;
  }
  for (i = 0; i < n; i++) {
    printf("Write name: ");
    read_name(students[i].name, sizeof(students[i].name));

    printf("Write age: ");
    if (scanf("%d", &students[i].age) != 1) {
      return 1;
    }

    flush_stdin();

    printf("Write grade: ");
    if (scanf("%f", &students[i].grade) != 1) {
      return 1;
    }

    flush_stdin();
    printf("\n");
  }

  int res = find_oldest_student(students, n);
  printf("res: %d\n", res);

  free(students);

  return 0;
}

int find_oldest_student(struct Student students[], int size) {
  int maxIndex = 0;

  for (int i = 1; i < size; i++) {
    if (students[i].age > students[maxIndex].age) {
      maxIndex = i;
    }
  }

  return maxIndex;
};

void read_name(char *buf, int size) {
  if (fgets(buf, size, stdin) == NULL) {
    return;
  }

  if (strchr(buf, '\n') == NULL) {
    flush_stdin();
  } else {
    buf[strcspn(buf, "\n")] = '\0';
  }
}

void flush_stdin() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF) {
  }
}
