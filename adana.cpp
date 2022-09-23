#include <stdio.h>
main()
{
int
sayi,i,basamak ;
printf("Bir tam sayi giriniz:");
scanf("%d", & sayi);
i=sayi;
basamak=0;
while(i!=0){

basamak++;
i=i/10;
}
printf("%d sayisi %d basamaklidir" ,sayi,basamak);
return 0;
}

