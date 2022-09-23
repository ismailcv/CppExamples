//tas kagit makas
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
	int tas=1, kagit=2, makas=3, secimscan, secimo, secimp, oyuncu=0, pc=0 ;	
	printf("tas = 1 -- kagit = 2 -- makas = 3 \n");	

	while(1){
	
	srand(time(NULL));	
	secimp=rand()%3 +1;		
	scanf("%d",& secimo);
	
    if(secimo>0 && secimo<4){
		
	if(secimo==1){	
	    if(secimp==1)
	    printf("berabere \n");
	    else if(secimp==2)
	    pc++;
	    else if (secimp==3)
	    oyuncu++;
    	
}   	
	if(secimo==2){	
	    if(secimp==2)
	    printf("berabere \n");
	    else if(secimp==3)
	    pc++;
	    else if (secimp==1)
	    oyuncu++;
 	
}	
	if(secimo==3){	
	    if(secimp==3)
	    printf("berabere \n");
	    else if(secimp==1)
	    pc++;
	    else if (secimp==2)
	    oyuncu++;
   	
}
}
   else printf("yanlis sayi girdiniz. \n");
   printf("devam etmek istiyor musun? evet=1 -- hayir=0 \n");
   scanf("%d" ,& secimscan);
   if (secimscan==1)
   printf("devam ediyorsunuz. \n");
        else if(secimscan==0){
		
        printf("oyuncu skoru: %d   " , oyuncu);
        printf("bilgisayar skoru: %d  " , pc);
    }
    else 
    printf("yanlis sayi girdiniz.Devam ediyorsunuz. \n");


}

}
