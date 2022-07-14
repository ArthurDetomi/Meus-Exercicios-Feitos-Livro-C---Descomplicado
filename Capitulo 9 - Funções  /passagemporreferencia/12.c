#include <stdio.h>
void somatudo(int vet[],int *somaimpares,int *somapares,int *tam){
    for(int i=0;i<*tam;i++){
        if(vet[i]%2==0)
            *somapares+=vet[i];
        else{
            *somaimpares+=vet[i];
    }
}
void main (){
    int v[10]={1,2,3,4,5,6,7,8,9,10},tam=10;
    int somaimpares=0,somapares=0;
    somatudo(v,&somaimpares,&somapares,&tam);
    printf("\nSoma impares: %d\nSomapares: %d",somaimpares,somapares);
}