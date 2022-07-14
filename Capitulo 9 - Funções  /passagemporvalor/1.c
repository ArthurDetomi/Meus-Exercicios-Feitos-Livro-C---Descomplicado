#include <stdio.h>
int maiornumero(int a,int b){
    int z;
    if(a>b)
        z=a;
    else
        z=b;
    return z;
}
void main (){
    int a,b;
    printf("\nDigite dois numeros :");
    scanf("%d %d",&a,&b);
    printf("\nO maior numero eh : %d\n",maiornumero(a,b));
}