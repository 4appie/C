#include <stdio.h>

char *is_pass_or_fail(int score);

int main() {
  int score;
  printf("Write score: ");
  scanf("%d", &score);
  char *result = is_pass_or_fail(score);
  printf("%s\n", result);
  return 0;
}

char *is_pass_or_fail(int score) {
  if (score >= 50) {
    return "Pass";
  } else {
    return "Fail";
  }

  return 0;
}
