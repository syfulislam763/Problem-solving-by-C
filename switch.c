#include <stdio.h>


int main(void){
    short n = 3;
    // printf("Input day code (0 to 6): ");
    // fflush(stdout);
    // scanf("%hd",&n);

    switch(n){
        case 0:
            printf("today is sunday\n");
            break;
        case 1:
            printf("today is monday\n");
            break;
        case 2:
            printf("today is tuesday\n");
            break;
        case 1+2:
            printf("today is wednesday\n");
            break;
        case 4:
            printf("today is thursday\n");
            break;
        case 5:
            printf("today is friday\n");
            break;
        case 6:
            printf("today is saturday\n");
            break;
        default:
            printf("day code is worng\n");
    }


    // int t = printf("0");
    // printf("%d", t);
    // printf("%d\n", 3&5);

    return 0;
}