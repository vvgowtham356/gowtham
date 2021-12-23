/*program to convert minutes into hours and minutes */
#include<stdio.h>
int main()
{
	int a,b,x;
	printf("enter the no of minutes:");
	scanf("%d",&x);
	a=x/60; 
	b=x%60;
	printf("no.of hours is:%d\n,no.of minutes is:%d",a,b);
	
}
