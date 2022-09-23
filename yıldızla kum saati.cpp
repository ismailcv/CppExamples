 #include <stdio.h>
 #include <stdlib.h>
 
int main()

{    
    int a, b, satir, bosluk_sayisi, yildiz_sayisi;
    satir = 21;
    bosluk_sayisi = 0;
    yildiz_sayisi = satir;
    
	for(a=0; a<satir; a++)
	{    
    for(b=0; b<yildiz_sayisi;b++)
    printf("*");
	              
    if( a < (satir / 2) )
	{
   yildiz_sayisi-=2;
   bosluk_sayisi++;
    }
            
    else
	{
    yildiz_sayisi+=2;
    bosluk_sayisi--;
    }
 
    printf("\n");
    for(b=0; b<bosluk_sayisi;b++)    
    printf(" ");     
    }
   
    return 0;
	    
}

