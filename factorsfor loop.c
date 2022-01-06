#include<stdio.h>
void main()
{
	int i,n,pro=1;
	scanf("%d",&n);
	for(i=1;n>=i;--n)
	{
		pro *= n;
	}
	printf("%d",pro);
}
