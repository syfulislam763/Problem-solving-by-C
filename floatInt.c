#include <stdio.h>
#include <string.h>


int main(void){
    char number[10];
    int length, i=0, flag=0, integerNum;
    float floatingNum;



    printf("Input a number to test whether integer or floating: ");
    fflush(stdout);
    scanf("%s", &number);

    length = strlen(number);

    while(i++<=length){
        if(number[i] == '.'){
            flag=1;
            break;
        }
        //printf("%c\n", number[i]);
    }

    if(flag)printf("%s is floating number", number);
    else printf("%s is integer number", number);

    // printf("%s\n", number);
    // printf("%d\n", length);

    return 0;
}