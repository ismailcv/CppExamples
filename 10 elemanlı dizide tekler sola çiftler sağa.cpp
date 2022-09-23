//1-100 arasýnda 10 elemanlý dizinin standart sapmasýný  hesaplama
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>

int main(){
	
    int e, standarts, i;
	standarts=0;
    int	rastgele [i];
	printf("Dizinin eleman sayisini giriniz:");
	scanf("%d",&e);
	srand(time(NULL));
		 
	for(i=0; i<e; i=i+1){
       	rastgele[i]=rand()%100 +1;
	    printf("%d. sayi:%d \n", i, rastgele[i]);   
	
	
	
	
	
	
	
    }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
