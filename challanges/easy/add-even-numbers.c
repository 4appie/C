#include <stdio.h>

int add_even_numbers(int n);

int main() {
  int num;
  printf("Print any positive number: ");
  scanf("%d", &num);

  printf("Even: ");
  for (int i = 1; i <= num; i++) {
    if (i % 2 == 0) {
      printf("%.d ", i);
    }
  }
  printf("\n");

  int sum = add_even_numbers(num);
  printf("Sum: %d\n", sum);

  return 0;
}

int add_even_numbers(int n) {
  int count = 0;

  for (int i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      count += i;
    }
  }

  return count;
};
