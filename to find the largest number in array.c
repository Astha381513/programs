#include <stdio.h>
int main() {
  int n;
  float arr[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i+1);
    scanf("%f", &arr[i]);
  }

  
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %.2f",arr[0]);

  return 0;
}
