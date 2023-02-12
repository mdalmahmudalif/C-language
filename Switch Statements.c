#include <stdio.h>
int main ()
{
    char grade = 'B';
    switch (grade){
          case 'A':
          printf("You did Excellent!");
          break;

          case 'B':
          printf("You did good!");
          break;

          case 'C':
          printf("You did problly!");
          break;

          case 'D':
          printf("You did very bad!");
          break;

          case 'F':
          printf("You Failed!");
          break;

          default:
            printf("Invalid grade");

    }

 return 0;
}
