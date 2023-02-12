#include <stdio.h>
#include <stdlib.h>
int main (){

      int age = 12;
      int * pAge = &age;
      double point = 3.3;
      double * pPoint = &point;
      char grade = 'A';
      char * pGrade = &grade;

printf("age's memory address: %p\n", &age);


return 0;
}
