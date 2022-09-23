//yýldýzlarla üçgen yapan program.
#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int sutun,b,c;
   
    for(sutun=1;sutun<=38;sutun+=2){
    for(c=1;c<(39-sutun)/2;c=c+1){printf(" ");}
    for(b=1;b<=sutun;b+=2){printf("*");}
    printf("\n");}
   
    return 0;
}
