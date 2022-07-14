#include <stdio.h>
enum semana{
    Domingo=0,Segunda,Terca,Quarta,Quinta,Sexta
};
void main (){
    enum semana o;
    int n;
    printf("\nDigite um numero de 2 a 8:");
    scanf("%d",&n);
    o=n;
    if(n<=6){
        printf("\n%d - feira",o);
    }
    if(n==7){
         printf("\nSabado");
    }
     if(n==7){
         printf("\nDomingo");
    }
}