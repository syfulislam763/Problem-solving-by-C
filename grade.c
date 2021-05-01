#include<stdio.h>
#include<stdbool.h>
main(){
    int n;
    bool grade;
    printf("Input grade number>");
    scanf("%d",&n);
    if(grade>80)grade = "A+";
    else if(grade>70)grade = "A";
    else if(grade>60)grade = "A-";
    else if(grade>50)grade = "B";
    else if(grade>40)grade = "C";
    else if(grade>33)grade = "D";
    else grade = "F";
    switch(grade){
        case '78':
            printf("Execelent.");
            break;
        default:
            printf("bad");
    }
    // n=n/10;
    // switch(n){
    //     case '10':
    //     printf("Execelent.\n");
    //     break;
    //     case '9':
    //     printf("Execelent.\n");
    //     break;
    //     case '8':
    //     printf("Execelent.\n");
    //     break;
    //     case '7':
    //     printf("Very Good.\n");
    //     break;
    //     case '6':
    //     printf("Good\n");
    //     break;
    //     case '5':
    //     printf("Okey.\n");
    //     break;
    //     case '4':
    //     printf("ok.\n");
    //     break;
    //     default:
    //     printf("bad");

    // }
}