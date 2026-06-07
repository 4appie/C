#include <stdio.h>

int is_in_order(char *str) {
  for (int i = 0; str[i] != '\0' && str[i + 1] != '\0'; i++) {
    if (str[i] > str[i + 1]) {
      return 0;
    }
  }
  return 1;
}

int main() {
  char str[50];
  printf("write str: ");
  scanf("%s", str);

  int res = is_in_order(str);
  printf("res %d\n", res);

  return 0;
}
