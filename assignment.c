#include <stdio.h>
#include <math.h>


int main(void){

    float a,
          b;
    char sign;
    // float s;
    printf("Enter arithmetic operator (+, -, *, /)>");
    scanf("%f%c%f", &a, &sign, &b);
    // printf("sqrt ()>");
    // scanf("%f", &s);
    



    switch (sign) {
        case '+':
            printf("%.2f + %.2f = %.2f\n",a, b, a+b);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n",a, b, a-b);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n",a, b, a*b);
            break;
        case '/':
            printf("%.2f / %.2f = %.2f\n",a, b, a/b);
            break;
        case 'R':
            printf("root of %.2f = %.2f\n",b, sqrt(b));
            break;

        default:
            printf("Input valid arithmetic operation\n");
    }


    // if(s){
    //     printf("%.2f", sqrt(s));
    // }

    // printf("%.2f + %.2f = %.2f\n",a, b, a+b);
    // printf("%.2f - %.2f = %.2f\n",a, b, a-b);
    // printf("%.2f * %.2f = %.2f\n",a, b, a*b);
    // printf("%.2f / %.2f = %.2f\n",a, b, a/b);


    

    return 0;
}