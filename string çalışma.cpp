#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int a [10], b[10], m, c=0, t=0;
	int i;
	srand(time(0));
	for(i=0;i<10;i++){
	
		a[i]=rand()%21;
		printf("%4d",a[i]);
		if(a[i]%2==0){	
			b[c]=a[i];
			c++;
		}
	else{
		b[t-1]=a[i];
		
i++;
		
	}
}
    printf("\n");
    for(i=0; i<10;i++)  printf("%4d",b[i]);

}


