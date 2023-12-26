#include <stdio.h>

int main(){
  int l;
  printf("Enter length of string: ");
  scanf("%d", &l);
  char user_str[l];
  printf("Enter string to be reversed: ");
  scanf("%s", &user_str);
  char temp[l];
  for (int i = 0;i<l;i++){
    temp[i] = user_str[i];
  }
  for (int i = l;i>=0;i--){
    user_str[l-i] = temp[i];
  }
  printf("%s", user_str);

  return 0;
}
