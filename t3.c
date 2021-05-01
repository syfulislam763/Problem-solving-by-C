// Write a C Program using a do-while loop to calculate and print the first m fibonacci number.
#include <stdio.h>
#include <conio.h>
int main()
{
	int n,f,f1=-1,f2=1;
	printf("Enter the Number of Terms:");
	scanf("%d",&n);
	printf("The Fibonacci Series is:");
	do
	{
		f=f1+f2;
		f1=f2;
		f2=f;
		printf("\n%d",f);
		n--;
	}
	while(n>0);
	getch();
	return 0;
}