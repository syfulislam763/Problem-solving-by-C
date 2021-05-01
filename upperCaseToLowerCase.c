#include <stdio.h>

int main(void){
    char name[30];
    short i=0;

    printf("Input a name to get lowerCase from upperCse: ");
    fgets(name,30, stdin);

    while(name[i]){
        if(name[i] >= 'A' && name[i] <= 'Z'){
            name[i] = name[i]+32;
        }
        i++;
    }

    printf("%s", name);

    
    



    return 0;
}