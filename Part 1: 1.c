#include <stdio.h>
#include <stdlib.h>


float sim_int(float p, float r, float t);

int main(){
    float pr, rate, time, simple_interest;
    printf("Enter the principle, rate of interest(in %) and time: ");
    scanf("%f%f%f", &pr, &rate, &time);

    simple_interest = sim_int(pr, rate, time);
    printf("The simple interest is: %f", simple_interest);

    return 0;
}

float sim_int(float p, float r, float t){
    float simple = (p * r * t)/100;
    return simple;
}
