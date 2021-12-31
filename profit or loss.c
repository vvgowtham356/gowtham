#include<stdio.h>
void main()
{
  float cp,sp,loss,profit;
  printf("enter the values");
  scanf("%f\n%f",&cp,&sp);
  if(cp>sp)
  { 
    profit=cp-sp;
    profitpercentage= ((cp-sp)/cp)*100;
    printf("%f\n",profit);
    printf("%f",profit percentage);
  }
  else if(sp>cp)
{
	loss=sp-cp;
	loss percentage=((sp-cp)/cp)*100;
	printf("%f\n",loss);
	printf("%f",loss percentage);
}
else 
{
	prinf("no profit no loss");
}

