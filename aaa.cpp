#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
int main ()
{
    int ydizi[10], dizi[10], i, a;
    float top=0, ort, ytop=0, yort, ss;
    for(i=0;i<10;i++)
    {
        printf("\n%d.terimi giriniz\n",(i+1));
        scanf("%d",&dizi[i]);
    }
    for(i=0;i<10;i++)
    {
        top=top+dizi[i];
    }
    ort = top/10;
    for(i=0;i<10;i++)
    {
        ydizi[i]=dizi[i]-ort;
        pow(ydizi[i],2);
        ytop=ytop+ydizi[i];
    }
    yort=ytop/9;
    sqrt(yort);
    printf("%.2f", yort);
    return 0;
}
