#include <stdio.h>


int main(void){
    
    unsigned short i,j,rows;

    printf("Input Pyramid Size:");
    scanf("%hu", &rows);
    //Half Pyramid
    printf("Half Pyramid:\n");
    for(i=0;i<rows;i++){
        for(j=0; j<=i; j++){
            printf(" * ");
        }
        printf("\n");
    }

    printf("\n\n");

    //Full Pyramid
    printf("Full Pyramid:\n");
    for(i=0; i<rows; i++){
        for(j=i+2; j<=rows; j++){
            printf(" ");
        }
        for(j=0; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    

    

    return 0;
}