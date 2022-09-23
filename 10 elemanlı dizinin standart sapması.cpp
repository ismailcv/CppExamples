//1-100 arasýnda  10 elemanlý dizinin standart sapmasýný  hesaplama
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>

int main(){
	
    int e, standarts, i, toplam=0, j, fark, kare;
	standarts=0;
	int ort1=0;
	int ort2=0;
	printf("Dizinin eleman sayisini giriniz: ");
	scanf("%d",&e);
	int rastgele [e];
	srand(time(NULL));
		 
	for(i=0; i<e; i=i+1){
       	rastgele[i]=rand()%100 +1;
	        printf("%d. sayi:%d \n", i+1, rastgele[i]);
		        toplam=toplam+rastgele[i];		
    }
	ort1=toplam/e;
	printf("ortalama: %d \n", ort1);
	
	for(j=0; j<e; j++){
	    fark=rastgele[j]-ort1;
	        printf("%d ", fark);
		        kare=fark*fark;
				    ort2=ort2+kare;     		
	}
	standarts=ort2/e;
	standarts=sqrt(standarts);
	printf("\n standart sapma: %d", standarts);
		
	return 0;	
}
