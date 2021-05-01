#include <stdio.h>

int main(void){
    typedef unsigned int Array[5];
    Array numbers = {5, 10, 15, 20, 25};
    int len = sizeof(numbers)/sizeof(numbers[0]);

    

    typedef struct STD {
        int a;
        char name[10];
        float b;
    } user;

    // typedef struct STD user;

    user e = {10, "saiful", 4.5F};
    // e.a = 10;
    // e.name[10] = "syful";
    // e.b = 4.34;


    printf("%d %d %d\n", sizeof(e.a), sizeof(e.b), sizeof(e.name));
    printf("%d\n", sizeof(e));
    
    
    

    return 0;
}