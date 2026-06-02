#include <stdio.h>

float split_bill(int total, int friends);

int main() {
  int total, friends;
  printf("Sum & count friends: ");
  scanf("%d %d", &total, &friends);

  float res = split_bill(total, friends);
  if (res == (int)res) {
    printf("%.f\n", res);
  } else {
    printf("%.2f\n", res);
  }

  return 0;
}

float split_bill(int total, int friends) { return (float)total / friends; }
