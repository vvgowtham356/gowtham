#include<stdio.h>
void main()
{
	int n,r,dc=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		printf("%d\n",r);
		n=n/10;
		dc++;
	}
    printf("\n%d",dc);
}
