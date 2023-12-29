#include <stdio.h>

int main(){
  int a, b;
  int *pA, *pB, *pTemp;
  printf("Enter the value of a and b to be swapped (integers): ");
  scanf("%d%d", &a, &b);
  pA = &a;
  pB = &b;

  printf("\nBefore change: \n");
  printf("Value of a of adress %p: %d\nValue of b of adress %p: %d\n", pA, *pA, pB, *pB);

  pTemp = pB;
  pB = pA;
  pA = pTemp;

  printf("\nAfter change: \n");
  printf("Value of a of adress %p: %d\nValue of b of adress %p: %d\n", pA, *pA, pB, *pB);

  return 0;
}
