//elemanlý rastgele seçiden diziden elemanlarý ayný olmayan dizinin oluþturulmasý.
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main (){
	int n,i,j,k=0, sayac=0;
	printf("Dizinin eleman sayisini giriniz:");
	scanf("%d",&n);
	int rastgele[n];
	int dizi[n];
	srand(time(NULL))  ;
	for(i=0; i<n; i++){
		rastgele[i]=rand()%20+1;
		printf("%d. sayi:%d \n", i+1, rastgele[i]);
	}
	for(i=0;i<n;i++){
		for(j=i-1;j>=0;j--){
			if(rastgele[i]==rastgele[j]){
				sayac++;
			}
			
		}
		if(sayac==0){
			dizi[k]=rastgele[i];
			k++;
		}
		sayac=0;
	}
	printf("yeni dizi:");
	for(i=0; i<k ;i++)
        printf("%d ",dizi[i]);			
}


