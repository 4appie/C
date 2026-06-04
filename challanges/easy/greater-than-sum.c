#include <stdio.h>

int check_greater_than_sum(int num, int num1, int num2) {
  return num > num1 + num2;
}

int main() {
  int num, num1, num2;
  printf("Write num num1 num2: ");
  scanf("%d %d %d", &num, &num1, &num2);

  int res = check_greater_than_sum(num, num1, num2);
  printf("Result: %d\n", res);
  return 0;
}
