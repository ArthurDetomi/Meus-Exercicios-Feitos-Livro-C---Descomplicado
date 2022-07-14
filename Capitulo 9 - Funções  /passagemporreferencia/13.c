#include <stdio.h>
void vetrand(int vet[],int *tam){
    for(int i=0;i<*tam;i++){
        vet[i]=rand()%10;
        printf("%d,",vet[i]);
    }
}
void mostrarvetor(int vet[],int *tam){
    printf("\nVetor :");
    for(int i=0;i<*tam;i++){
        printf("%d,",vet[i]);
    }
}
void ordenavet(int vet[],int *tam){
    int aux,indicemenor=0,menor;
    for(int i=0;i<*tam;i++){  
        menor=99999;
        for(int j=i;j<*tam;j++){
            if(vet[j]<menor){
                menor=vet[j];
                indicemenor=j;
            }
        }
        aux=vet[i];
        vet[i]=menor;
        vet[indicemenor]=aux;
    }
}
void main (){
    int tam=10;
    int vet[tam];
    vetrand(vet,&tam);
    mostrarvetor(vet,&tam);
    ordenavet(vet,&tam);
    printf("\nVetor Ordenado\n");
    mostrarvetor(vet,&tam);
    printf("\n\n");
}