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
  for (int i = 1; i < length;i++){
    if (arr[i]>max){
      max = arr[i];
    }
  }

  printf("The largest number in the array is %d", max);

  return 0;
}
