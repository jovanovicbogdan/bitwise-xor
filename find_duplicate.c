#include <stdio.h>

int find_duplicate(int arr[], int n) {
  int result = 0;
  for (int i = 0; i < n - 1; i++) {
    result = result ^ i;
  }

  for (int i = 0; i < n - 1; i++) {
    result = result ^ arr[i];
  }

  return result;
}

int main() {
  int numbers[] = {1, 2, 3, 4, 4, 5};
  int n = sizeof(numbers) / sizeof(numbers[0]);
  int duplicate_number = find_duplicate(numbers, n);
  printf("In the array '{");
  for (int i = 0; i < n; i++) {
    if (i == (n - 1)) {
      printf("%d", numbers[i]);
    } else {
      printf("%d, ", numbers[i]);
    }
  }
  printf("}' duplicate number is %d.\n", duplicate_number);
  return 0;
}
