#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num, prod = 1;
  printf("Enter a number to find the factorial of: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++){
    prod = prod * i;
  }

  printf("Factorial of %d is %d", num, prod);

  return 0;
}
