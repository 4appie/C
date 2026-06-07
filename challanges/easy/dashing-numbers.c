#include <stdio.h>
#include <string.h>

char *convert_to_dashes(int num) {
  static char result[101];
  if (num > 100)
    num = 100;
  else if (num < 1)
    num = 0;
  memset(result, '-', num);
  result[num] = '\0';

  return result;
}

int main() {
  int num;

  printf("Write num to 99: ");
  scanf("%d", &num);

  printf("\"");
  char *res = convert_to_dashes(num);
  printf("%s", res);
  printf("\"\n");

  return 0;
}
