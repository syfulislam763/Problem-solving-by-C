#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
    unsigned int n, guessNumber;
    time_t t;
    srand((unsigned)time(&t));
    n = rand()%10+1;
    printf("guess a Number:");
    fflush(stdout);
    scanf("%d",&guessNumber);

    if(n == guessNumber)printf("You are win\n");
    else if(n > guessNumber)printf("Guess number is low\n");
    else if(n < guessNumber)printf("Guess number is high\n");
    else printf("You are failed\n");

    printf("Guess number was %d", n);

    return 0;
}