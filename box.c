#include <stdio.h>

int main(void){
    short int height, width, i,j;
    printf("Input Height And Width to Make a Box(height, width): ");
    fflush(stdout);
    scanf("%hd, %hd",&height,&width);
    for(i=1; i<=height; i++){
        for(j=1; j<=width; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
} 