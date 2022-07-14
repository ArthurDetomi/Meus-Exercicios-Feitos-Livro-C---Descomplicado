#include <stdio.h>
#include <stdbool.h>
int maiorfatorprimo(int a){
    int aux=2,cont=0,i=0;
    bool v=false;
    for(i=a;i>0;i--){
        cont=0;
        for(int j=i;j>0;j--){
            if(j!=1 && j!=i){
                if(i%j==0){
                    cont++;
                    break;
                }
            }
        }
        if(cont==0){
            if(a%i==0){
                v=true;
            }
        }
        if(v==true)
            break;
    }
    return i;
}
void main (){
    int n;
    printf("\nDigite um numero:");
    scanf("%d",&n);
    printf("\nO maior fator primo de %d: %d\n",n,maiorfatorprimo(n));
}