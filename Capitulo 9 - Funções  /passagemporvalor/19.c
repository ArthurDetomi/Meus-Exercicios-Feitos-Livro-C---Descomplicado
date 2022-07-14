#include <stdio.h>
#include <math.h>
float cosseno(float x){
    float soma=0;
    int cont=0,fat=1;
    for(int i=1;i<=6;i++){
        fat=1;
        for(int j=cont;j>0;j--){
            fat*=j;
        }
        if(i%2==0){
            soma-=((pow(x,cont))/fat);
        }else
            soma+=((pow(x,cont))/fat);
        cont+=2;
    }
}
void main (){
    float x;
    printf("\nDigite o valor do angulo:");
    scanf("%f",&x);
    float aux=x;
    x*=(3.1414592/180);
    printf("\nCosseno de (%.2f): %.2f\n",aux,cosseno(x));    
}