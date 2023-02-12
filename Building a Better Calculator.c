#include <stdio.h>
#include <stdlib.h>

int main (){

double Num1;
double Num2;
char OP;

Printf("Enter your 1st Number: ");
scanf("lf\n", &Num1);
printf("Enter Operator: ");
scanf("%c\n", &OP);
printf("Enter your 2nd Number: ");
scanf("lf\n", &Num2);


  if(OP == '+'){
    printf("%f", Num1 + Num2);
   } else if(OP == '-'){
      printf("%f", Num1 - Num2);
    } else if(OP == '*'){
        printf("%f", Num1 * Num2);
    } else if(OP == '/'){
         printf("f", Num1 / Num2);
    } else {
     printf("Invalid Operator");
    }

    return 0;
}
