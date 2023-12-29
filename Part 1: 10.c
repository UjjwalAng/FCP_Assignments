#include <stdio.h>
#include <stdlib.h>

int *swap_3(int num1, int num2);
int *swap_3(int num1, int num2);

int main(){



  return 0;
}

int *swap_3(int num1, int num2){
  int temp = num2;
  num2 = num1;
  num1 = temp;
  int arr[2] = {num1, num2};

  return &arr;
}

int *swap_2(int num1, int num2){
  num1 = num1 + num2;
  num2 = num1 - num_2;
  num1 = num1 - num2;
  int arr[2] = {num1, num2};

  return &arr;
}
