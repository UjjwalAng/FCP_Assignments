#include <stdio.h>
#include <stdlib.h>

int main(){
  int i, j, n, d_sum=0;
  printf("Enter the dimension of the square matrix: ");
  scanf("%d", &n);
  int arr[n][n];

  for (i=0;i<n;i++){
    for (j=0;j<n;j++){
      printf("Enter an integer: ");
      scanf("%d", &arr[i][j]);
    }
  }

  for (i=0;i<n;i++){
    for (j=0;j<n;j++){
      if (i == j){
        d_sum += arr[i][i];
      }
    }
  }

  printf("Sum of diagonals of array is: %d", d_sum);


  return 0;
}
