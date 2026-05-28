#include <stdio.h>

int main() {
  int num;

  while (num != 1999) {
    printf("Write num from 0 to 100: ");
    scanf("%d", &num);

    if (num >= 90 && num < 100) {
      printf("A\n");
    } else if (num >= 80 && num < 90) {
      printf("B\n");
    } else if (num >= 70 && num < 80) {
      printf("C\n");
    } else if (num >= 60 && num < 70) {
      printf("D\n");
    } else if (num >= 0 && num < 60) {
      printf("F\n");
    } else {
      printf("Incorrect\n");
    };

    printf("--------------------------\n");
  };

  printf("Secret quit: 1999\n");
  return 0;
}
