#include <stdio.h>
int main (){
/*
     int nums[3][2] = {
                     {3, 6},
                     {6, 9},
                     {9, 13},
                      };

            printf("%d", nums[1][1]); */

       int nums[3][2] = {
                     {3, 6},
                     {6, 9},
                     {9, 13},
                 };

        int i, j;
        for (i = 0; i < 3; i++){
        for (j = 0; j < 2; j++){
        printf("%d,", nums[i][j]);
        }
        printf("\n");
        }

return 0;
}

