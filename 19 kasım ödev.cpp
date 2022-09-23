#include <stdio.h>
#include<stdlib.h>
int x=3,y=7,z;

   if (y>x && y%x==0)
    {
       z = x+y;
    }
   else
   {
      if(x>y || x!=0)
      {
       z=x*y;
      }
      else
      {
       z=x-y;
      }
   }
   printf("%d",z); 
