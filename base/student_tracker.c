#include <stdio.h>

int main() {
  char name[51];
  printf("Enter student name: ");
  scanf(" %[^\n]", name);

  int age, level;
  printf("Enter student age: ");
  scanf("%d", &age);

  printf("Enter student level: ");
  scanf("%d", &level);

  float academicScore;
  printf("Enter academic score: ");
  scanf("%f", &academicScore);

  printf("\n--- Student Information ---\n");
  printf("Name: %s\n", name);
  printf("Age: %d years\n", age);
  printf("level: %d\n", level);
  printf("Academic Score: %.2f\n", academicScore);

  return 0;
}
