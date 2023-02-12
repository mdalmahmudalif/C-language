#include <stdio.h>
int main ()

{
    char Color [20];
    char PluralNoun [20];
    char CelebrityF [20];
    char CelebrityL [20];

    printf("Enter a color: ");
    scanf("%s", Color );
    printf("Enter a PluralNoun: ");
    scanf("%s", PluralNoun );
    printf("Enter a Celebrity: ");
    scanf("%s%s", CelebrityF,CelebrityL);

    printf("Rose are %s\n", Color);
    printf("%s are Blue\n", PluralNoun);
    printf("I love %s %s\n", CelebrityF, CelebrityL);


    return 0;

}
