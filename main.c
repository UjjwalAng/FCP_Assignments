#include <stdio.h>

int Swapper(int *pNum1, int *pNum2);

int main(){
  int x = 12, y = 21;
  int *pX = &x, *pY = &y;
  printf("Value of x: %d\nValue of y: %d\n", x, y);

  Swapper(pX, pY);
  printf("\nSwapped numbers using pointers in function:\n");

  printf("\nValue of x: %d\nValue of y: %d\n", x, y);

  return 0;
}

  int Swapper(int *pNum1, int *pNum2){
    *pNum1 = 21;
    *pNum2 = 12;

    return 0;
  }
