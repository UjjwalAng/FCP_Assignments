#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int choice;
  FILE *pF;

  printf("ENTER\n 1 - To read the file\n 2 - To write to the file\n 3 - To append to the file\n");
  scanf("%d", &choice);

  if (choice == 1){
    pF = fopen("C:\\Users\\ujjwa\\OneDrive\\Desktop\\C_FILES\\user_stuff.txt.txt", "r");
    char buffer[255];
    while (fgets(buffer, 255, pF) != NULL){
      printf("%s", buffer);
    }
  }
  else if (choice == 2){
    pF = fopen("C:\\Users\\ujjwa\\OneDrive\\Desktop\\C_FILES\\user_stuff.txt.txt", "w");
    char text[50];
    printf("Enter text to be wrote onto file\n");
    scanf("%s", &text);
    fprintf(pF, "%s", text);
  }
  else if (choice == 3){
    pF = fopen("C:\\Users\\ujjwa\\OneDrive\\Desktop\\C_FILES\\user_stuff.txt.txt", "a");
    char text[50];
    printf("Enter text to be wrote onto file\n");
    scanf("%s", &text);
    fprintf(pF, "%s", text);
  } else {
    printf("Invalid choice");
    return 0;
  }

  fclose(pF);

  return 0;
}
