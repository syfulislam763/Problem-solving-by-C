#include <stdio.h>
//#include <stdlib.h>

int main(void){

    // int i, n, temp, j1, j2;

    // i = 0;
    // n = 10;
    // temp = 0;
    // j1 = 1;
    // j2 = 1;

    // do{
    //     printf("%d\n", temp);
    //     j1 = j2;
    //     j2 = temp;
    //     temp = j1 + j2;
    //     i++;
    // }while(i < n);

    // int n, rev = 0, remainder;
    // printf("Enter an integer: ");
    // scanf("%d", &n);
    // while (n != 0) {
    //     remainder = n % 10;
    //     rev = rev * 10 + remainder;
    //     n /= 10;
    // }
    // printf("Reversed number = %d", rev);



    int a[10], n, i;

    printf("enter an integer number: ");
    scanf("%d", &n);

    for(i = 0; n > 0; i++){
        a[i] = n%2;
        n = n/2;
    }

    
    printf("Binary number = ");
    for(i=i-1; i >= 0; i--){
        printf("%d", a[i]);
    }
    



    
    


    
    return 0;

}