#include <stdio.h>
int funcao(int n){
    int soma=0;
    for(int i=1;i<=n;i++){
        soma+=i;
    }
    return soma;
}

void main (){
    int n;
    printf("\nDigite o valor de n:");
    scanf("%d",&n);
    printf("\nA soma ate o %d termo: %d",n,funcao(n));
}