#include <stdio.h>


int main(void){
    short int year;

    printf("Input year to test whether leap year or not: ");
    fflush(stdout);
    scanf("%hd",&year);
    printf("%hd\n", year);

    if((year%4==0 && year%100 != 0) || year%400==0)
    printf("%hd is leap year\n", year);
    else printf("%hd is not leap year\n",year);


    return 0;
}