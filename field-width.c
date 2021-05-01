#include <stdio.h> //preprocessing directive # sign of preprocessing directives

int main(void){
    float float_number1 = 5.33;
    float float_number2 = 8.03;
    float float_number3 = 9.00;

    printf("%6.2f, %5.0f, %-4.2f", float_number1, float_number2, float_number3);

    return 0;
}