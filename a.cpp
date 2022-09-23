// girilen sayýnýn basamak toplamý ve kaç basamaklý olduðu
#include<stdlib.h>
#include<stdio.h>
int main(){
    int a,b,c;
   
    for(a=1;a<=38;a+=2){
    for(c=1;c<(39-a)/2;c++){printf(" ");}
    for(b=1;b<=a;b+=1){printf("*");}
    printf("\n");}
   

	
	
	return 0;
}
