




//write a program to determine and print sum of the harmonic series

#include <stdio.h>
#include <conio.h>

int main(){

    int n;
    float i = 0, sum = 0;
    printf("1 + 1/2 + 1/3 +...+1/n\n");
    scanf("%d", &n);

    for(i = 1; i < n; i++){
        sum = sum + 1/i;
    }

    printf("The answer is : %f\n", sum);

 
    getch();
    return 0;
}













//write a c program using pointer to compute the sum of all element stored in an array.


// #include <stdio.h>

// int main(){
//     int num[10] = {1,2,3,4,5,6,7,8,9,10};
//     int *pt;
//     int i, sum = 0;

//     pt = &num[0];

//     for(i = 0; i < 10; i++){
//         sum += *pt++;
//     }

//     printf("sum = %d\n", sum);

//     return 0;
// }







//write a c program to compute the sum of the digits of given integer number.
// #include <stdio.h>

// int main(){

//     long num, temp,sum = 0;
//     scanf("%d", &num);
//     temp = num;

//     while(num>0)
//     {
//         sum = sum + num; 
//         num--;
//     }

//     printf("given number = %ld\n", temp);
//     printf("sum of the digits = %ld\n", sum);

//     return 0;
// }








//write a c program to convert any integer to its binary equivalent.
// #include <stdio.h>

// int main(){
//     int n,i,j,bin,dec;
//     printf("\n\nConvert decimal to binary \n");
//     printf("Enter an number to convert: ");
//     scanf("%d",&n);

//     dec = n;
//     i = 1;

//     for(j=n; j>0; j=j/2){
//         bin = bin+(n%2)*i;
//         i = i*10;
//         n = n/2;
//     }

//     printf("\n The binary of %d is = %d", dec, bin);


//     return 0;
// }








//write a c program using while loop to reverse the digits of an integer number.
// #include <stdio.h>
// int main(){
//     int n ,reverse = 0;
//     printf("enter a number to reverse:");
//     scanf("%d", &n);
 
//     while(n != 0){
//         reverse = reverse*10;
//         reverse = reverse + n % 10;
//         n = n / 10;
//     }

//     printf("Reverse of entered number is = %d", reverse);
//     return 0;
    
// }



//write a c program to find all possible roots of a quadratic equation.
// #include <stdio.h>
// #include <math.h>

// int main(){

//     double a,b,c,root1,root2;
//     printf("Please enter a : ");
//     scanf("%lf", &a);
//     printf("Please enter b : ");
//     scanf("%lf", &b);
//     printf("Please enter c : ");
//     scanf("%lf", &c);

//     root1 = (-b+sqrt(b*b-4*a*c)/(2*a));
//     root2 = (-b-sqrt(b*b-4*a*c)/(2*a));

//     printf("\nFirst root is %lf", root1);
//     printf("\nSecond root is %lf", root2);

//     return 0;
// }


//write a c program using a do-while loop to calculate and print the first m fibonacci number
// #include <stdio.h>
// #include <conio.h> 

// int main(){
//     int n,f,f1 = -1, f2 = 1;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     printf("The Fibonacci series is: ");
//     do{
//         f = f1 + f2;   
//         f1 = f2;
//         f2 = f;
//         printf("\n%d", f);
//         n--;
//     }while(n>0);  

//     getch();
//     return 0; 
// }