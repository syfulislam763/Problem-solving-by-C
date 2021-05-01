#include <stdio.h>

int main(void){
    unsigned long long int sum=0;
    unsigned int count = 10;
    for(unsigned int i=1;i<=count; sum+=i++);
    printf("sum of 1 to %u = %u\n", count, sum);
    printf("Other way to get sum of 1 to %u = %u\n", count, ((count+1)*count)/2);
    // for(int i=1, j=2; i<5; i++, j+=2){
    //     printf("%d\n", i*j);
    // }

    
}