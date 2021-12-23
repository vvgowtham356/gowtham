#include<stdio.h>
int main()
{
	int y,m,w,d,x,a,b,c;
printf("no.of days x:");
scanf("%d",&x);
y=x/365;
a=x%365;
m=a/30;
b=a%30;
w=b/7;
d=b%7;
printf("no.of years :%d\n",y);
printf("no.of months :%d\n",m);
printf("no.of weeks :%d\n",w);
printf("no.of days:%d,d");

return 0;
}
