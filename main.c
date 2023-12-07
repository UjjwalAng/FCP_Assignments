#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;

    int arr_1[3][3] = {
                        {1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    printf("The first matrix:\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d ", arr_1[i][j]);
        } printf("\n");
    }
    int arr_2[3][3] = {
                        {3, 2, 1},
                        {6, 5, 4},
                        {9, 8, 7}};
    printf("\nThe second matrix:\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d ", arr_2[i][j]);
        } printf("\n");
    }

    int arr_3[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            arr_3[i][j] = arr_1[i][j] + arr_2[i][j];
        }
    }
    printf("\nThe third matrix:\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d ", arr_3[i][j]);
        } printf("\n");
    }


    return 0;
}
