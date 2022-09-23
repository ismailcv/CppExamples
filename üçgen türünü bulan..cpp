#include <stdio.h> 
#include <stdlib.h>
int main()
{
	 int a,b,c;
	 printf("ucgen koselerinin uzunluklarini giriniz\n");
	 scanf ("%d" ,&a);
	  scanf ("%d" ,&b);
	   scanf ("%d" ,&c);
	 
	 if (a==b && a==c && b==c)
	 printf("eskenar ucgen");
	 
	  else if (a!=b && a!=c && b!=c)
	 printf("cesitkenar ucgen");
	
	else 
	printf(" ikizkenar ucgen");
	 	 
}
