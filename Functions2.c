#include <stdio.h>
int main()
{

SayHi("Alif", 17);
SayHi("Bonny", 30);
SayHi("Rohsan", 25);

}
    void SayHi(char name[], int age){
    printf("Hello %s, you are %d years old\n", name, age);

}
