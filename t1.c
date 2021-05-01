// Write a c program to find all possible roots of a quandratie equation.
#include <stdio.h>
#include <math.h>
main()
{
	double a,b,c,root1,root2;
	printf("please enter a \n");
	scanf("%lf",&a);
	printf("please enter b \n");
	scanf("%lf",&b);
	printf("please enter c \n");
	scanf("%lf",&c);
	root1=(-b+sqrt(b*b-4*a*c)/(2*a));
	root2=(-b-sqrt(b*b-4*a*c)/(2*a));
	printf("\n First root is %lf",root1);
	printf("\n Second root is %lf",root2);
	return 0;
}