#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void){

    printf("Variable of type char store values from %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Variable of type unsigned char store values from 0 to %u\n\n\n", UCHAR_MAX);

    printf("Variable of type short store values from %hd to %hd\n", SHRT_MIN, SHRT_MAX);
    printf("Variable of type unsigned short store values from 0 to %hu\n\n\n", USHRT_MAX);

    printf("Variable of type int store values from %d to %d\n", INT_MIN, INT_MAX);
    printf("Variable of type unsigned int store values from 0 to %u\n\n\n", UINT_MAX);

    printf("Variable of type long store values from %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Variable of type unsigned long store values from 0 to %lu\n\n\n", ULONG_MAX);

    printf("Variable of type long long store values from %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("Variable of type unsigned long long store values from 0 to %llu\n\n\n", ULLONG_MAX);


    printf("The size of smallest positive non-zero value of type float is %e\n",FLT_MIN);
    printf("The size of largest positive non-zero value of type float is %e\n\n\n",FLT_MAX);

    printf("The size of smallest positive non-zero value of type double is %e\n",DBL_MIN);
    printf("The size of largest positive non-zero value of type double is %e\n\n\n", DBL_MAX);

    printf("The size of smallest positive non-zero value of type long double is %Le\n", LDBL_MIN);
    printf("The size of largest positive non-zero value of type long double is %Le\n\n\n", LDBL_MAX);

    printf("Variables of type float provide %u decimal digits precision. \n", FLT_DIG);
    printf("Variables of type double provide %u decimal digits precision. \n", DBL_DIG);
    printf("Variables of type long double provide %u decimal digits precision. \n",LDBL_DIG);



    return 0;
}