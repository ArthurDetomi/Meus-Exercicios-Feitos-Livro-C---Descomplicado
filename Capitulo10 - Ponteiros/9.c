#include <stdio.h>
void imprimavetor(int *p,int tam){
    for(int i=0;i<tam;i++){
        printf("%d,",*(p+i));
    }
}
void main (){
    int vetor[10]={1,2,3,4,5,6,7,8,9,10},*p=vetor,tam=10;
    printf("\nVetor:");
    imprimavetor(p,tam);
}