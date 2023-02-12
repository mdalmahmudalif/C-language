#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE * fpointer = fopen("myproject.txt", "w");
    fprintf(fpointer, "Alif, CEO Of Company\nAlam, Co-Fundor");

    fclose(fpointer);

return 0;
}
