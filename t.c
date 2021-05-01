// Write a c program using while loop to reverse the digits of an integer number.
#include <stdio.h>
int main() 
{
	int n,reverse=0;
	printf("Enter a umber to reverse: \n");
	scanf("%d",&n);
	while(n!=0)
	{
		reverse=reverse*10;
		reverse=reverse+n%10;
		n=n/10;
	}
	printf("Reverse of entered number is= %d \n",reverse);
	return 0;
}