#include<stdio.h>
void main()
{
	int i,a,fc=0;
	scanf("%d",&a);
	for(i=2;i<=a;i++)
	{
		if(a%i==0)
		{
			fc++;
	    }
    }
	if (fc==1)
	{
		printf("prime number");
		
	}
	else
	{
		printf("notprime");
	}
}
