#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c;
    printf("a degerini giriniz\n");
    scanf ("%d", & a);
    printf("b degerini giriniz\n");
       scanf("%d", &b);
       c=a;
       a=b;
       b=c;    
	printf("a=%d",a);
		printf("b=%d",b);
} 
