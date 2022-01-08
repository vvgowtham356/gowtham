#include<stdio.h>
void main()
{
	int r,n, is_duck=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10; 
		n=n/10; 
		if(r==0)
	    	{         
	     		is_duck = 1;
	     		break;
	     	} 
	}
	if(is_duck == 1)
	{
		printf("Duck");
	}
	else
	{
		printf("Not a duck");
	}
}
