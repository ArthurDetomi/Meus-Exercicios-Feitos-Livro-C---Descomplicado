#include <stdio.h>
#include <stdlib.h>
void recebervetor(int vet[],int tam){
    for(int i=0;i<tam;i++){
        printf("\nDigite um valor:");
        scanf("%d",&vet[i]);
    }
}
void ordenavetor(int vet[],int tam){
    int pos=0,aux=0,cont=0;
    for(int i=0;i<tam;i++){
        int menor=999999;
        for(int j=i;j<tam;j++){
            if(vet[j]<menor){
                menor=vet[j];
                pos=j;
            }
        }
        aux=vet[i];
        vet[i]=menor;
        vet[pos]=aux;
        cont++;
    }
}
void mostrarvetor(int vet[],int tam){
    for(int i=0;i<tam;i++){
        printf("%d  ,",vet[i]);
    }
}
void main(){
    int const t=10;   
    int vet[t];
    printf("\nAtribua valores ao vetor\n");
    recebervetor(vet,t);
    printf("\nVetor valores :");
    mostrarvetor(vet,t);
    printf("\nOrdenando Vetores ...\n");
    ordenavetor(vet,t);
    printf("\nVetor ordenado :");
    mostrarvetor(vet,t);
    printf("\nFim programa\n");
}