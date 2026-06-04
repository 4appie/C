#include <stdio.h>

int is_empty(char *str) { return str[0] == '\n'; }

int main() {
  char str[100];

  printf("Just type Enter ");
  fgets(str, sizeof(str), stdin);
  printf("str: %s", str);

  int res = is_empty(str);
  printf("Result: %d\n", res);

  return 0;
}
