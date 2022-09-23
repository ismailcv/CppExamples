#include <stdio.h>
#include <math.h>
#include <stdlib.h>

 main (){
    int x, a;
	float pay, payda=1, sonuc=1, radyanx;
	printf("Bir x degeri giriniz. \n");
	scanf("%d", &x);
	radyanx=x*3.141/180;
	
	for (a=2; a<=30 ; a +=2) {
		pay=pow(radyanx, a);
		    payda*=(a-1)*a;
		if(a%4==0){
			sonuc+=pay/payda;
		}
	else{
		sonuc-=pay/payda;
	}	
}
    printf("%f", sonuc);
    return 0;
}

