#include <stdio.h>
void funcao(int *p1,int tam,int valor){
    for(int i=0;i<tam;i++){
        *(p1+i)=valor;
        printf("%d,",*(p1+i));
    }
    printf("\n");
}
void main (){
    int vet[10],tam=10,valor=2;
    printf("\nDigite um valor para preencher o vetor:");
    scanf("%d",&valor);
    int *p1=vet;
    printf("\nVetor:");
    funcao(p1,tam,valor);
    
}