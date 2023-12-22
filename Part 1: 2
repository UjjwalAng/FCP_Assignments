#include <stdio.h>
#include <stdlib.h>

float fahr_2_cel(float fahr);
float cel_2_fahr(float cel);

int main()
{
  int choice;
  float ftemp, ctemp;

  printf("Enter 1 if you want to convert Celsius to Fahrenheit \nEnter 2 if you want to convert Fahrenheit to Celsius\n");
  scanf("%d", &choice);

  if (choice == 1){
      printf("Enter the temperature in Celsius: ");
      scanf("%f", &ctemp);
      ftemp = cel_2_fahr(ctemp);
      printf("The temperature in Fahrenheit is: %f ", ftemp);
  } else if (choice == 2){
      printf("Enter the temperature in Fahrenheit: ");
      scanf("%f", &ftemp);
      ctemp = fahr_2_cel(ftemp);
      printf("The temperature in Celsius is: %f", ctemp);
  } else {
      printf("Invalid choice");
    }

    return 0;

}

float cel_2_fahr(float cel){
  float fahr = (9*cel)/5 + 32;
  printf("%f \n", fahr);
  return fahr;
}

float fahr_2_cel(float fahr){
  float cel = ((fahr - 32) * 5)/9;
  printf( "%f \n", cel);
  return cel;
}
