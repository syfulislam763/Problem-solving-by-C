#include <stdio.h>

int main(){

    // int arr[2][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    // };
    int arr[2][3];


    short i, j;

    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("Enter a value of index arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i < 2; i++){
       for(j = 0; j < 3; j++){
           printf("%d\t", arr[i][j]);
       }
    }
    


    return 0;
}