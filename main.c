#include <stdio.h>
#include <stdlib.h>

int main(){
  int num, i;
  printf("Enter the number of integers in the array: ");
  scanf("%d", &num);
  int *pArr = (int* )malloc(num*sizeof(int));

  if (pArr == NULL){
    printf("No memory available");
    exit(1);
  }

  for (i=0;i<num;i++){
    printf("Enter an integer: ");
    scanf("%d", pArr + i);
  }

  printf("\n The Array:\n");

  for (i=0;i<num;i++){
    printf("%d\n", *(pArr + i));
  }

  return 0;
}
