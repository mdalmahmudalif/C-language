#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter your Name: ");
    fgets(name,20, stdin);
    printf("your Name is %s", name);

    char nickname[6];
    printf("Enter your nickname: ");
    scanf("%s", nickname);
    printf("%s is your nickname\n", nickname);

    int age ;
    printf("Enter your Age: ");
    scanf("%d", &age);
    printf("Your Age is %d years old\n", age);

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("your gpa is %f\n", gpa);

    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("your grade is %c", grade);

    printf("Congratulation\n");


    return 0;
}
