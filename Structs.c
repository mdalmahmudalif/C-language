#include <stdio.h>

struct Student{
       char name[20];
       char major[20];
       int age;
       double gpa;
};

int main(){

    struct Student student1;
    student1.age = 13;
    student1.gpa = 3.3;
    strcpy( student1.name, "Mahdi");
    strcpy( student1.major, "Arts");

    struct Student student2;
    student2.age = 12;
    student2.gpa = 3.9;
    strcpy( student2.name, "Alex");
    strcpy( student2.major, "Arts");

    printf("%s", student1.name);

  return 0;
}
