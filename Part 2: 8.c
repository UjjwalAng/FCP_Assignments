#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int expo(int a, int b){
  int val = 1;
  for (int i=b; i>=0; i--){
    val = val * a;
  }
  return val;
}

int main(){
  char choice;

  printf("Enter:\n+ : for addition\n- : for subtraction\n* : for multiplication\n/ : for division\n^ : for exponentation\n");
  scanf("%c", &choice);


  if (choice == '+'){
    int num_1, num_2, val;
    printf("Enter the two integers (order doesn't matter!): ");
    scanf("%d%d", &num_1, &num_2);

    val = num_1 + num_2;
    printf("The number when adding %d to %d is: %d", num_1, num_2, val);
  } else if (choice == '-'){
    int num_1, num_2, val;
    printf("Enter the two integers (order matters!): ");
    scanf("%d%d", &num_1, &num_2);

    val = num_1 - num_2;
    printf("The number when subtracting %d from %d is: %d", num_2, num_1, val);
  } else if (choice == '*'){
    int num_1, num_2, val;
    printf("Enter the two integers (order doesn't matter!): ");
    scanf("%d%d", &num_1, &num_2);

    val = num_1*num_2;
    printf("The number when multiplying %d and %d is: %d", num_1, num_2, val);
  } else if (choice == '/'){
    float num_1, num_2;
    printf("Enter the two numbers (order matters!): ");
    scanf("%f%f", &num_1, &num_2);

    float val2 = num_1/num_2;
    printf("The number when dividing %f by %f is: %f", num_1, num_2, val2);
  } else if (choice == '^'){
    int num_1, num_2, val;
    printf("Enter the two integers (order matters!): ");
    scanf("%d%d", &num_1, &num_2);

    val = expo(num_1, num_2);
    printf("The number when raising %d to the power of %d is: %d", num_1, num_2, val);
  } else {
    printf("Invalid choice");
  }

  return 0;
}
