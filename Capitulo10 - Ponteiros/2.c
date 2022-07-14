#include <stdio.h>
void main (){
    int a,b;
    int *p1=&a,*p2=&b;
    printf("\nDigite dois numeros:");
    scanf("%d %d",&a,&b);
    if(p1>p2)
        printf("\nA eh maior %p\n",p1);
    else
        printf("\nB eh maior %p\n",p2);
}