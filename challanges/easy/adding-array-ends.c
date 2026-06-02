#include <stdio.h>
#include <stdlib.h>

int add_ends(int *array, int array_size);

int main() {
  int size;
  printf("Enter array_size: ");
  scanf("%d", &size);

  // int arr[size];
  int *arr = malloc(size * sizeof(int));
  printf("Enter %d integers: ", size);

  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
    printf("%d", arr[i]);

    if (i < size - 1)
      printf(", ");
  }
  printf("\n");

  if (size == 1) {
    printf("Arr has 1 num: %d\n", arr[0]);
    free(arr);
    return 1;
  }

  int sum = add_ends(arr, size);
  printf("Sum: %d + %d = %d\n", arr[0], arr[size - 1], sum);
  free(arr);

  return 0;
};

int add_ends(int *array, int array_size) {
  return array[0] + array[array_size - 1];
};
