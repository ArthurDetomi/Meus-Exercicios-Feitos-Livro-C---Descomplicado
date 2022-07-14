#include <stdio.h>
void main (){
    int a=2,*b=&a,**c=&b,***d=&c;
    *b=2*(*b);
    **c=(**c)+2;
    ***d=(***d)+2;

    printf("\nb= %d, c= %d , d= %d",*b,**c,***d);
}