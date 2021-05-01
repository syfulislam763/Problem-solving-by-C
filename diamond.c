#include <stdio.h>
#include <stdbool.h>


void diamondMaker(int size){
    bool isReverse = true;

    for(int i = 1;  i <= size; i++){

        if(isReverse){

            for(int j = (size-i); j > 0; j--){
            printf(" ");
            }
            for(int j = 0; j < i; j++){
                printf("* ");
            }
            printf("\n");

        }else{

            for(int j = 2; j < i;j++){
            printf(" ");
            }
            for(int j = (size-i); j>=0; j--){
                printf(" *");
            }
            
            printf("\n");
            
        }

        if(i == size){
            if(!isReverse)break;
            size = i;
            i = 1;
            isReverse = false;
        }
    }
}



int main(void){

    int sizeOfDiamond;
    printf("how big will the size of diamond be? ");
    scanf("%d",&sizeOfDiamond);
    diamondMaker(sizeOfDiamond);
    

    //printf("\n\n\n");

    // int sizeOfDiamond2 = 5;
    // for(int i = 0; i < sizeOfDiamond2; i++){
    //     for(int j = 0; j <= i;j++){
    //         printf(" ");
    //     }
    //     for(int j = (sizeOfDiamond2-1)-i; j>=0; j--){
    //         printf(" *");
    //     }
    //     printf("\n");
    // }




    return 0;
}