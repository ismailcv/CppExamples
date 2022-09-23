//2 zar 100 kere atýlýyor sonuçlar.
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
	int zar1, zar2, a, b, c, d, e, f, g, i, j;
	srand(time(NULL));
	int sonuc [6] [6]= {0};
	printf("zarlarimiz atiliyor. \n");
	
	for(a=0; a<100; a++){
	    sonuc [i] [j];
		    zar1=rand()%6+1;
			    zar2=rand()%6+1;
				    i=zar1-1;
					    j=zar2-1;   
						    sonuc [i] [j] ++;							    				
	}
	printf("sonuclar yazdiriliyor.\n");
	
	for(b=0; b<6; b++){
	    printf("%3d", sonuc[0] [b]);	
	}
	printf("\n");
	for(c=0; c<6; c++){
	    printf("%3d", sonuc[1] [c]);	
	}
	printf("\n");
	for(d=0; d<6; d++){
	    printf("%3d", sonuc[2] [d]);	
	}
	printf("\n");
	for(e=0; e<6; e++){
	    printf("%3d", sonuc[3] [e]);	
	}
	printf("\n");
	for(f=0; f<6; f++){
	    printf("%3d", sonuc[4] [f]);	
	}
	printf("\n");
	for(g=0; g<6; g++){
	    printf("%3d", sonuc[5] [g]);	
	}	
	return 0;
}
