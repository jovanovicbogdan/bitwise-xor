#include <stdio.h>

int sum(int arr[], int len) {
  int sum = 0;
  for (int i = 0; i < len; i++) {
    sum = sum + arr[i];
  }

  return sum;
}

int main() {
  int numbers[] = {1, 2, 4, 5};
  int n = sizeof(numbers) / sizeof(numbers[0]);
  int range[n + 1];
  for (int i = 0; i < n + 1; i++) {
    range[i] = i + 1;
  }
  int numbers_sum = sum(numbers, n);
  int range_sum = sum(range, n + 1);
  int missing_number = numbers_sum ^ range_sum;
  printf("In the array '{");
  for (int i = 0; i < n; i++) {
    if (i == (n - 1)) {
      printf("%d", numbers[i]);
    } else {
      printf("%d, ", numbers[i]);
    }
  }
  printf("}' the missing number is %d.\n", missing_number);
  return 0;
}
