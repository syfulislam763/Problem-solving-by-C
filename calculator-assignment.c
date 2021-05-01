#include <stdio.h>
#include <math.h>


int main(void){

    float a,b;
    printf("Input Tow number (a,b)>");
    fflush(stdout);
    scanf("%f, %f", &a, &b);


    printf("%f + %f = %.2f\n",a, b, a+b);
    printf("%f - %f = %.2f\n",a, b, a-b);
    printf("%f * %f = %.2f\n",a, b, a*b);
    printf("%f / %f = %.2f\n",a, b, a/b);


    

    return 0;
}