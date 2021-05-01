//how many times will hello world be printed and why?
#include <stdio.h>


// int i;
int main()
{

    for(int i = 1; i <= 3; i++){
        printf("step1\n");
        // if(i == 1)break;
        for(int j = 1; j<=3; j++){
            printf("step2\n");
            
            for(int k = 1; k <= 3; k++){
                printf("step3\n");
                //if(k == 1)break
                if(k == 1) goto out;
            }
            
            //if(j == 1)break;
        }
    }

    out: printf("i am out form loop");



    // int i = 6720, j = 4;
    // while((i%j) == 0){i = i/j;j++;}
    // printf("%d\n",j);



    // int a = 5, b = 2, c = 3;
    // if(a>b)
    // if(b>c)
    //     printf("a is bigger");
    // else printf("else");
    // else printf("else 2");



    // unsigned int i = 65000;
    // while (i++ != 0);
    // printf("%d", i);

    // int a = 1;
    // do{
    //     printf("%d\n", a);
    //     a++;
    // }while(a <= 5);

    // int x = 3;
    // if (x == 2); x = 0;
    // if (x == 3) x++;
    // else x += 2;
 
    // printf("x = %d", x);

    // int i = 3;
    // while (i--)
    // {
    //     int i = 100;
    //     i--;
    //     printf("%d ", i);
    // }

    // int i = -5;
    // while (i <= 5)
    // {
    //     if (i >= 0)
    //         break;
    //     else
    //     {
    //         i++;
    //         continue;
    //     }
    //     printf("GeeksQuiz");
    // }

    // int check = 20, arr[] = {10, 20, 30};
    // switch (check)
    // {
    //     case arr[0]: printf("Geeks ");
    //     case arr[1]: printf("Quiz ");
    //     case arr[2]: printf("GeeksQuiz");
    // }

    // char inchar = 'A';
    // switch (inchar)
    // {
    //     case 'A' :
    //         printf ("choice A n") ;
    //     case 'B' :
    //         printf ("choice B ") ;
    //     case 'C' :
    //     case 'D' :
    //     case 'E' :
    //     default:
    //         printf ("No Choice") ;
    // }


    // int i;   
    // for (i = 1; i != 10; i += 2) 
    // printf(" GeeksQuiz ");

    // int i=1;
    // for(printf("1st\n"); i < 3 && printf("2nd\n"); ++i && printf("3rd and %d\n", i)){
    //     printf("*\n");
    // }



    // int i = 0;
    // for (i=0; i<20; i++)
    // {
    //     switch(i)
    //     {
    //     case 0:
    //         i += 5;
    //     case 1:
    //         i += 2;
    //     case 5:
    //         i += 5;
    //     default:
    //         i += 4;
    //         break;
    //     }
    //     printf("%d ", i);
    // }




    // int i = 1024;
    // for (; i; i >>= 1)
    //     printf("hello world\n");
    // return 0;

    // if (i);
    // else
    //     printf("else");
    // return 0;

//     int n;
//    for (n = 9; n!=0; n--)
//      printf("n = %d", n--);
//    return 0;

    // int c = 5, no = 10;
    // do {
    //     no /= c;
    // } while(c--);
  
    // printf ("%d\n", no);

    return 0;
}