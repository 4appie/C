#include <stdio.h>
// #include <math.h>

int are_parallel(float m1, float m2);

int main() {
  float m1, m2;
  printf("Write m1 & m2: ");
  scanf("%f %f", &m1, &m2);

  int res = are_parallel(m1, m2);
  printf("Result: %d\n", res);
  return 0;
}

int are_parallel(float m1, float m2) {
  if (m1 == m2)
    return 1;
  return 0;

  // return fabsf(m1 - m2) < 1e-6f;
}
