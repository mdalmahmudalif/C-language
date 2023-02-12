#include <stdio.h>
int main(){

    int SecretNumber = 3;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int Outofguess = 0;

    while (guess != SecretNumber && Outofguess == 0){
          if (guessCount < guessLimit){
          printf("Enter a Number: ");
          scanf("%d", &guess);
         guessCount++;
          } else {
             Outofguess = 1;

          }


    }
     if (Outofguess == 1){
        printf("Out of guess");
     } else {

printf("You Win!");

     }


return 0;
}
