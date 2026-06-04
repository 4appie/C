#include <stdio.h>
#include <string.h>

char *greet(char *country);

int main() {
  char country[50];
  printf("Print your country: ");
  scanf("%49s", country);

  char *res = greet(country);
  printf("%s\n", res);

  return 0;
}

char *greet(char *country) {
  if (strcmp(country, "France") == 0 || strcmp(country, "fr") == 0) {
    return "Bonjour";
  }
  if (strcmp(country, "Germany") == 0 || strcmp(country, "de") == 0) {
    return "Hallo";
  }
  if (strcmp(country, "Spain") == 0 || strcmp(country, "es") == 0) {
    return "Hola";
  }

  return "Hello";
}
