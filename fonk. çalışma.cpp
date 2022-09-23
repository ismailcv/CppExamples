#include <stdio.h> // bunun içinde printf scanf fonk. var
#include <stdlib.h>

int asalmi(int sayi){
	int i;
	for(i=2; i<sayi; i++){
		if (sayi%i ==0)
		    return 0;
	}
    return 1;
}

int main(){
	int n;
	
	printf("bir sayi gir: ");
	scanf("%d", &n);
	
	if (asalmi(n) == 0) {
	
	    printf ("bu sayi asal degildir");
}
	else {

	
	printf("sayi asaldir");
}
	return 0;
}
