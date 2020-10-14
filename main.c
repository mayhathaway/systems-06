#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // step 1
  int ray[10];

  // step 2
  srand(time(NULL));
  int i;
  for (i = 0; i < 10; i++) {
    ray[i] = rand();
  }

  // step 3
  ray[9] = 0;

  // step 4
  for (i = 0; i < 10; i++) {
    printf("%d\n", ray[i]);
  }

  // step 5
  int arr[10];

  // step 6
  int *ray_point = ray;
  int *arr_point = arr;

  for (i = 0; i < 10; i++) {
    *(arr_point + i) = *(ray_point + 9 - i);
  }

  printf("switcheroo!\n");
  for (i = 0; i < 10; i++) {
    printf("%d\n", arr[i]);
  }

}
