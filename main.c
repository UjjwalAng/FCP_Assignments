#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);

    if (a%2 == 0){
        if (a%3 == 0){
            if (a%5 == 0){
                if (a%6 == 0){
                    if (a%7 == 0){
                        if (a%8 == 0){
                            printf("%d is divisible by 2,3,5,6,7 and 8.", a);
                        } else {
                        printf("%d is not divisible by 8.", a);}
                    } else {
                    printf("%d is not divisible by 7.", a);}
                } else {
                printf("%d is not divisible by 6.", a);}
            } else {
            printf("%d is not divisible by 5.", a);}
        } else {
        printf("%d is not divisible by 3.", a);}
    } else {
    printf("%d is not divisible by 2.", a);}

    return 0;
}
