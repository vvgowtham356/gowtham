#include<stdio.h>
int main()
{
int a,b,c;
printf("enter values of a and b\n:");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("after swapping the value of the a is %d\n",a);
printf("the value of b is %d\n",b);
return 0;
}
