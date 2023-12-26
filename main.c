#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char user_str[20];
  char temp[20];

  printf("Enter the string: ");
  scanf("%s", user_str);

  strncpy(temp,user_str, sizeof(temp));
  strrev(user_str);

  int check = 0;

  for (int i=0; temp[i];i++){
    if (temp[i] != user_str[i]){
      check += 1;
    }
  }

  if (check != 0){
    printf("%s is not a palindrome\n", temp);
  } else {
    printf("%s is a palindrome\n", temp);
  }

  return 0;
}
