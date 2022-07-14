#include <stdio.h>
#include <stdbool.h>
bool quadradoperfeito(int n){
    int cont=0,mult;
    bool vf=false;
    for(int i=0;i<=n;i++){
        mult=i*cont;
        if(mult==n){
            vf=true;
            break;
        }
        cont++;
    }
    return vf;
}
void main (){
    int n;
    printf("\nDigite um numero:");
    scanf("%d",&n);
    bool ver=quadradoperfeito(n);
    if(ver==true)
        printf("\nEh um quadrado perfeito\n");
    else
        printf("\nNao eh um quadrado perfeito\n");
}