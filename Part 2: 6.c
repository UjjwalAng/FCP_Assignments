#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  int fib(int n);

int main() {
  int n, value;

  printf("Enter the number to find the fibonacci value of: ");
  scanf("%d", &n);
  value = fib(n-1);

  printf("The fibonacci value at term %d is: %d", n, value);

  return 0;
}

int fib(int n){
  if (n<2){
    return n;
  }
  return fib(n-1) + fib(n-2);
}
