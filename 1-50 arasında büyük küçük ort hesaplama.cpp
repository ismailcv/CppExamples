#include <stdlib.h>
#include <stdio.h>
int main ()
{
	int sayi1, eb, ek, sayi2;
	int tsa=0;
    int a=0;
    int ort=0;
    	
    printf("1 ile 50 arasinda sayi giriniz : ");
        scanf("%d",& sayi1);
 	
    if(sayi1>50 || sayi1<1){
		printf("Gecerli bir sayi giriniz \n");		
    }
	
	else{
		ort=ort+sayi1;
		eb=sayi1;
		ek=sayi1;
	}
	
	if(sayi1 %2 !=0){
	  	tsa++;
		} 	
	  
    while(a<9) {
    	printf("1 ile 50 arasinda sayi giriniz : ");
    	    scanf("%d",&sayi2);
 	
	if(sayi2>50 || sayi2<1){
		printf("Gecerli bir sayi giriniz \n");		
		}
	
	else{
		ort=ort+sayi2;				
		    a++;
	            if(sayi2>eb) {
	            	eb=sayi2;
				}	
			         if(sayi2<ek) {
				       ek=sayi2;
				}
		}
		
	if(sayi2 %2 !=0){
	  	tsa++;
		}	
	}
	ort=ort/10;
        printf("tek sayi adedi = %d\n", tsa);
            printf("ort =%d \n",ort);
                printf("en buyuk sayi=%d\n", eb);
                    printf("en kucuk sayi=%d", ek);

}
