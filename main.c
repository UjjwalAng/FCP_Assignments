#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char user_str[20];
  char temp[20];
  int length;

  /*part a */

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

  /*part b */

  length = strlen(temp);
  printf("The length of string %s: %d", temp, length);

  /*part c */

  char temp_1[20];
  char temp_2[20];

  printf("Enter two strings to concatenate(Second string added to end of first string): ");
  scanf("%s%s", temp_1, temp_2);
  strcat(temp_1, temp_2);
  printf("%s", temp_1);

  return 0;
}
