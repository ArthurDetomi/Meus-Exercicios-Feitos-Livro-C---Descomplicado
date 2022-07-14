#include <stdio.h>
void funcao(int vet[],int *tam,int *maior,int *qtd){
    *maior=vet[0];
    int cont=0;
    for(int i=0;i<*tam;i++){
        if(vet[i]>*maior)
            *maior=vet[i];
    }
    for(int i=0;i<*tam;i++){
        if(vet[i]==*maior)
            cont++;
    }
    *qtd=cont;
}
void main (){
    int vet[10]={0,2,3,4,9,5,9,9,2,1},maior,qtd,tam=10;
    funcao(vet,&tam,&maior,&qtd);
    printf("\nO maior valor: %d\nQuantas vezes repete: %d\n",maior,qtd);
}