#include <stdio.h>
#include <string.h>


int main(void){
    char name[30];
    int len,
         i;
    printf("Input Your Name To Get UpperCase from LowerCawe: ");
    fgets(name, 30, stdin);
    
    len = strlen(name);
    
    for(i=0; i<len-1;i++){
        if(name[i] >= 'a' && name[i] <= 'z'){
            name[i] = name[i]-32;
        }
    }

    

    printf("%s", name);

    




    return 0;
}