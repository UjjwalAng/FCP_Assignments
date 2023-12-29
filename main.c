#include <stdio.h>

int lin_search(int array[], int num);

int main(){
  int  len, val, inst;
  printf("Enter the length of array: ");
  scanf("%d", &len);
  if (len<=0){
    printf("Array needs at least one element!");
    return 0;
  }

  int arr[len];
  for (int i=0;i<len;i++){
    printf("Enter number: ");
    scanf("%d", &inst);
    arr[i] = inst;
  }

  printf("What number is to be found: ");
  scanf("%d", &inst);
  val = lin_search(arr, inst);

  if (val != -1){
    printf("Elemeant %d exists at index: %d", inst, val);
  } else{
    printf("Element %d isn't present in the list", inst);
  }

  return 0;
}

int lin_search(int array[], int num){
  for (int j=0;array[j];j++){
    if (array[j] == num){
      return j;
    }
  }
  return -1;
}
