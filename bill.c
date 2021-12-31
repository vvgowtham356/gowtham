#include<stdio.h>
void main()
{int customerid,units;
  float amount,surcharge,netamount;
  printf("enter the customerid:,units:");
  scanf("%d\n",&customerid);
  scanf("%d\n",&units);

  if (units<200)
  {
    amount=units*1.20;
  	printf("%2f",amount);
  }
 else if(units>=200&&units<400)
 
{ amount=units*1.50;
 amount>400, surcharge=amount*15/100;
  netamount=amount+surcharge;
  printf("%2f\n%2f\n%2f",amount,surcharge,netamount);
}
else if(units>=400&&units<600)
{
	amount=units*1.80;
	surcharge=amount*15/100;
    netamount=amount+surcharge;
    printf("%2f\n%2f\n%2f",amount,surcharge,netamount);
}
else if(units>=600)
{
	amount=units*2.00;
	surcharge=amount*15/100;
	netamount=amount+surcharge;
	printf("%2f\n%2f\n%2f",amount,surcharge,netamount);
}

}

  
