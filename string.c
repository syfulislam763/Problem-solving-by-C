




#define __STDC_WANT_LIB_EXT1__ 1
#include <string.h>
#include <stdio.h>
 
int main(void)
{








    //searching string
    char str[] = "I live in bangladesh. bangladesh is very beautyful country";
    
    char s[50];
    printf("Enter string:\n");
    // fgets(s, sizeof(s), stdin); 
    // gets(s);

    printf("%s", s);

    //search substring from a string
    // char search[] = "very";
    // char *substring = NULL;
    // substring = strstr(str, "hgghu");
    // if(substring)printf("%s", substring);

    // char *b_got = str;
    // int count = 0;

    // while(b_got = strchr(b_got, 'b')){
    //     b_got++;
    //     count++;
    // }
    // printf("%d\n", count);

    // char *bf_got = NULL;
    // char *bl_got = NULL;
    // bf_got = strchr(str, 'b');
    // bl_got = strrchr(str, 'b');
    // if(bf_got)printf("first occurence %c\n", *bf_got);
    // if(bl_got)printf("last occurence %c\n", *bl_got);

    // printf("address of first occurence b = %d\n", bf_got);
    // printf("address of last occurence b = %d\n", bl_got);





    // compearing string
    // char str1[] = "saiful";
    // char str2[] = "saiful";


    // if(strcmp(str2, str1) > 0){
    //     printf("str2 grater than the str1\n");
    // }else if(strcmp(str1, str2) == 0){
    //     printf("str1 and str2 is equal\n");
    // }
    // else {
    //     printf("str2 is less than the str1\n");
    // }


    



    // char str[50] = "Hello i am here, my name is ";
    // char s[] = "syful islam";

    // strcat_s(str, sizeof(str), s);
    // strncat_s(str, sizeof(str), s, 5);
    // strcat(str,s);
    // printf("%s", str);

    // char str[][32] = {
    //     "manners maketh man",
    //     "Many hands make light work",
    //     "Too many cooks spoil the brath"
    // };

    // char destination[50];

    // for(unsigned short i = 0; i < sizeof(str)/sizeof(str[0]); i++){
    //     printf("The string:\n \"%s\"\n contains %zu characters.\n",str[i], strnlen(str[i], sizeof(str[i])));
    //     //printf("The string:\n \"%s\"\n contains %zu characters.\n",str[i], strlen(str[i]));
    // }

    // strcpy(destination,str[0]) ;
    //strcpy_s(destination, sizeof(destination), s);
    // strncpy_s(destination, sizeof(destination), str[2], 15);
    // printf("%s\n", destination);

    return 0;
}





//     const char str[] = "How many characters does this string contain?";
 
//     printf("without null character: %zu\n", strlen(str));
//     printf("with null character:    %zu\n", sizeof str);
//     printf("without null character: %zu\n", strnlen_s(str, sizeof str));
 
// #ifdef __STDC_WANT_LIB_EXT1__ 
//     printf("without null character: %zu\n", strnlen_s(str, sizeof str));
// #endif
// }



// #include <stdio.h>
// #include <string.h>
// #define  __STDC_LIB_EXT1__ 
// #define __STDC_WANT_LIB_EXT1__1

// int main(){

//     char str[] = "syful islam";

//     printf("length of string = %zu\n", strlen(str));

//     // printf("length of string = %d", strlen(str));

//     #if defined __STDC_LIB_EXT1__
//         printf("length of string from strnlen_s method = %zu\n", strnlen_s(str, sizeof(str)));
//     #else
//         printf("Optional functions are not defined.\n");
//     #endif
//         return 0;



   


    // int len;
    // char str[] = "Hello world";

    // while(str[len] != '\0'){
    //     len++;
    // }

    // printf("length of \"%s\" is %d\n", str, len);




//     return 0;
// }


