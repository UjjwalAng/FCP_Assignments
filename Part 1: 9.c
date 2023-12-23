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

  int max = arr[0];
  int min = arr[0];
  int sum = 0;

  for (int i = 1; i < length;i++){
    if (arr[i]>max){
      max = arr[i];
    }
    if (arr[i]<min){
      min = arr[i];
    }
    sum += arr[i];
  }
  float avg = sum/length;

  printf("The maximum element is: %d\nThe minimum element is: %d\nThe average of all the elements in the array is: %f", max, min, avg);

  return 0;
}
