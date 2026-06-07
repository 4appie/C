#include <stdio.h>

int contains_space(char *str) {
  for (int i = 0; i < str[i] != '\0'; i++) {
    if (str[i] == ' ')
      return 1;
  }

  return 0;
}

int main() {
  char str[100];

  printf("print short string: ");
  fgets(str, sizeof(str), stdin);

  int res = contains_space(str);
  printf("res: %d\n", res);

  return 0;
}
