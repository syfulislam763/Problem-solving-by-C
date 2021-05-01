#include <stdio.h>
int main(void){

    int a[5] = {5, 10, 15, 20, 25};

    int *ptr;
    ptr = &a[0];

    printf("address of a = %p\n", &a);
    printf("address of a[0] = %p\n", &a[0]);
    printf("address of a[1] = %p\n", &a[1]);
    printf("address of a[2] = %c\n", '1');

    // for(int i = 0; i < 5; i++)
    // {
    //     printf("%d\n", *ptr);
    //     ptr++;
    // }



    // int i = 100;
    // int *ptr;
    // ptr = &i;

    // printf("value of i = %u\n", i);
    // printf("address of i = %u\n", &i);
    // printf("value of ptr ~ address of i = %u\n", ptr);
    // printf("address of ptr = %u\n", &ptr);
    // printf("value of pointer address = %u\n", *ptr);
    // printf("value of i by address = %u\n", *(&i));

    return 0;
}