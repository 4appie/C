#include <stdio.h>

char *can_enter_club(int age);

int main() {
  int age;
  printf("Print your age: ");
  scanf("%d", &age);

  char *res = can_enter_club(age);
  printf("%s\n", res);
  return 0;
}

char *can_enter_club(int age) {
  if (age >= 21) {
    return "Yes";
  }
  return "No";
}
