#include <stdio.h>
#include <math.h>
float serie(float x){
    int fat=1,cont=0,cont2=0;
    float soma=0;
    for(int i=1;i<=6;i++){
        fat=1;
        cont=2*cont2+1;
        for(int j=cont;j>0;j--){
            fat*=cont;
        }
        if(i%2==0)
            soma-=((pow(x,cont))/fat);
        else    
            soma+=((pow(x,cont))/fat);
        cont2++;
    }
    return soma;
}
void main(){
    float x;
    printf("\nDigite o valor do angulo:");
    scanf("%f",&x);
    float aux=x;
    x*=(3.1414592/180);
    printf("\nSeno de %.2f: %.2f",aux,serie(x));
}