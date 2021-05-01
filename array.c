#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int size, i,j, length;
    printf("Input Array Size: ");
    scanf("%d",&size);
    int array[size];
    length = sizeof(array)/sizeof(array[0]);
    printf("Input Number:\n");
    for(i=0; i<size; i++){
        scanf("%d",&array[i]);
    }
    
    printf("unshorted array: ");
    for(i=0; i<length; i++){
        printf("%d ",array[i]);
    }



    //sort arr
    for(i=0; i<length; i++){
        for(j=0; j<length; j++){
            if(array[i] > array[j]){
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
        
    }

    short smallestNum = array[0];


    printf("\n\n");

    for(i=0; i<length; i++){
        if(smallestNum > array[i]){
            smallestNum = array[i];
        }
    }
    printf("smallest number of array %d", smallestNum);

    printf("\n\n");
    printf("shorted array: ");
    for(i=0; i<length; i++){
        printf("%d ",array[i]);
    }
    return 0;
}



    // printf("size of full array %d\n", sizeof(array));
    // printf("size of singe array element %d\n", sizeof(array[0]));
    // printf("location of array %u\n", &array);
    // printf("location of array %u\n", &array[0]);
    // printf("location of array %u\n", &array[1]);
    // printf("location of array %u\n", &array[2]);