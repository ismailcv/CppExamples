#include <stdio.h>
#include <stdlib.h>

 int main ()
{
    long long sayi1, sayi2, toplam, f=1, i, son, ilk, a, b, c=0, d;
    printf("tam sayi giriniz \n");
    scanf("%lld",&sayi1);
    sayi2=sayi1;
    ilk=sayi1%10;
    do
	{
  	sayi1=sayi1/10;
   	if(sayi1!=0 && sayi1<=9) son=sayi1;
   	c++;	
	}
    
    while(sayi1>0);
    c--;
    for (i=0; i<c; i++)
    
	{
   	f=f*10;
	}
    a=ilk-son;
    b=son-ilk;
    a=f*a;
    d=sayi2+a+b;
    printf("sonuc:%lld", d);
    
    return 0;
}
