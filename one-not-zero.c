#include <stdio.h>
#define PI 3.14159265

int main(){
    //1. calculate the sum of three integer number.

    // int i1, i2, i3, sum;
    // printf("Input three integer number to get sum of them(a+b+c): ");
    // scanf("%d+%d+%d", &i1, &i2, &i3);
    // sum = i1 + i2 + i3;
    // printf("%d + %d + %d = %d\n", i1, i2, i3, sum);


    //2. calculate the area of circle.
    //formula of area of circle A = PI*r*r;
    
    // float r, areaOfCircle;
    // printf("Input radius to calculate area of circle: ");
    // scanf("%g", &r);
    // areaOfCircle = PI * r * r;
    // printf("Area of circle = %g\n", areaOfCircle);


    //3. calculate the circumference of a circle.
    //circumference of a circle = 2*PI*r

    // float C;
    // printf("Input radius to calculate circumference of a circle: ");
    // scanf("%g", &r);
    // C = 2*PI*r;
    // printf("Circumference of circle = %g\n", C);
    
    

    //4. calculate the area of a triangle.
    // area of triangle = 1/2 * base * height

    // float b, h, areaOfTriangle;
    // printf("Input base and height of a triangle to calculate area(base height): ");
    // scanf("%g %g", &b, &h);
    // areaOfTriangle = .5 * b * h;
    // printf("Area of triangle = %g", areaOfTriangle);

    //6. Temperature convert:
    //a) C --> F
    // float Tfahrenheit, Tcelsius;
    // printf("Convert temperature to celsius from fahrenheit: ");
    // scanf("%g", &Tfahrenheit);
    // Tcelsius = (Tfahrenheit - 32)*5/9;
    // printf("%.2f degree celsius form %g degree fahrenheit", Tcelsius, Tfahrenheit);


    //b) F --> C
    // float Tcelsius, Tfahrenheit;
    // printf("Convert temperature to fahrenheit from celsius: ");
    // scanf("%g", &Tcelsius);
    // Tfahrenheit = (9*Tcelsius)/5 + 32;
    // printf("%.2f degree fahrenheit form %g degree celsius", Tfahrenheit, Tcelsius);

    //c) C --> K
    // float Tkelvin, Tcelsius;
    // printf("Convert temperature to celsius from kelvin: ");
    // scanf("%g", &Tkelvin);
    // Tcelsius = Tkelvin - 273.15;
    // printf("%.2f degree celsius from %g degree kelvin", Tcelsius, Tkelvin);

    //d) K --> C
    // float Tcelsius, Tkelvin;
    // printf("Convert temperature to kelvin from celsius: ");
    // scanf("%g", &Tcelsius);
    // Tkelvin = Tcelsius + 273.15;
    // printf("%.2f degree kelvin from %g degree celsius\n", Tkelvin, Tcelsius);




    //7. Take a floating point number as input and display the floating point and integer part separatedly.
    // float f_number;
    // float fractionalPart, integerPart;
    // printf("Input a Floating point number(56.34): ");
    // scanf("%g", &f_number);
    // integerPart = (int)f_number;
    // fractionalPart = f_number - integerPart;
    // printf("integer part is %g and fractional part is %g of this %g floating point number\n", integerPart,fractionalPart, f_number);



    //8. determine whether a number is negative or positive.
    // float number;
    // printf("Input a number: ");
    // scanf("%g",&number);
    // if(number < 0){
    //     printf("The number %g is negative", number);
    // }else{
    //     printf("The number %g is positive", number);
    // }



    //9. Leap year or not
    // unsigned int year;
    // printf("Input a year to test leap year or not(year): ");
    // scanf("%d", &year);
    // if(year % 4 == 0 && year%100 != 0 || year%400 == 0){
    //     printf("%u is leap year", year);
    // }else{
    //     printf("%u is not leap year", year);
    // }


    //10. check even or odd
    int number;
    printf("Input a number to check whether even or odd (n): ");
    scanf("%d", &number);
    if(number%2==0){
        printf("%d is even number", number);
    }else{
        printf("%d is odd number", number);
    }





    


    return 0;
}