#include <stdio.h>

long long fact(int num);

int main(){
  int user_num;
  long long value;
  printf("Enter number whose factorial is to be calculated: ");
  scanf("%d", &user_num);
  value = fact(user_num);

  printf("The factorial of %d is %lld", user_num, value);

  return 0;
}

long long fact(int num){
  if (num >= 1){
    return num * fact(num-1);
  }
  else {
    return 1;
  }
}
