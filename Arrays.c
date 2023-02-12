#include <stdio.h>

int main ()

{
    int BadHuman[] = {3, 6, 9, 12, 15, 18};
    printf("%d\n", BadHuman[1]);

    int GoodHuman[] = {33, 66, 99, 122, 155, 188};
    GoodHuman [1] = 333;
    printf("%d", GoodHuman[1]);

    return 0;
}
