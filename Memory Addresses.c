#include <stdio.h>
int main(){

   char Name = 'Alif';
   int Age = 13;
   double Point = 5.0;
   char grade = 'A+';

   printf("Name: %p\nAge: %p\nPoint: %p\ngrade: %p", &Name, &Age, &Point, &grade);

return 0;
}
