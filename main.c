#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fact(int num);
float comb(int opt, int choice);

int main() {
  int n,r;
  float value;

  printf("Enter the number of options and number of trials to find nCr: ");
  scanf("%d%d", &n, &r);
  value = comb(n, r);

  printf("The number of combinations is: %f", value);

  return 0;
}

int fact(int num){
  int val = 1;
  for (int i = 1;i<=num;i++){
    val = val * i;
  }

  return val;
}

float comb(int opt, int choice){
  float val;
  val = fact(opt)/(fact(opt-choice)*fact(choice));
  return val;
}
