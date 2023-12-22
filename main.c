#include <stdio.h>
#include <stdlib.h>

int main()
{
  int length;
  printf("Enter length of array: ");
  scanf("%d", &length);
  int arr[length];

  for (int i = 1; i < length+1; i++){
    printf("Enter value %d: ", i);
    scanf("%d", &arr[i-1]);
  }

  int sum = 0;
  for (int i = 0; i <= length;i++){
    sum += arr[i];
  }

  printf("The sum of numbers in the array is %d", sum);

  return 0;
}
