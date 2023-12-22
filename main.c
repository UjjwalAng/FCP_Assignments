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
  for (int i = 0; i < length; i++){
    if (i%2 != 0){
      printf("%d, ", arr[i]);
    }
  }


  return 0;
}
