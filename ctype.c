#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>


int main(void){
    char letter;
    printf("Enter a UpperCase letter to get LowerCase->");
    scanf("%c", &letter);

    bool is_alpha_case = isalpha(letter);
    bool is_lower_case = islower(letter);
    bool is_upper_case = isupper(letter);
    char lower_case_letter;
    char upper_case_letter;

    if(is_alpha_case && is_lower_case){
        upper_case_letter = letter - 32;
        printf(" upper case letter: %c\n", upper_case_letter);
    }
        
    if(is_lower_case && is_upper_case){
        lower_case_letter = letter + 32;
        printf("lower case letter: %c\n", lower_case_letter);
    }
        
    int a = 10;
    int b = 20;
    int c, d;
     
    c = ++b + a;
    d = b + a--;

    printf("c = %d\n d = %d\n", c, d);


    return 0;
}