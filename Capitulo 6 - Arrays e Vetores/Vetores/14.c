#include <stdio.h>
#include <math.h>
void preenchevetor(int vet[],int tam){
    for(int i=0;i<tam;i++){
        printf("\nDigite um valor :");
        scanf("%d",&vet[i]);
    }
}
float mediavetor(int vet[],int tam){
    float soma,media;
    for(int i=0;i<tam;i++){
        soma+=vet[i];
    }
    media=soma/tam;
    return media;
}
float variancia(int vet[],int tam,int media){
    float soma=0,dif=0,p=0;
    for(int i=0;i<tam;i++){
        dif=vet[i]-media;
        p=pow(dif,2);
        soma+=p;
    }
    return soma;
}
void main(){
    int const t=10;
    int vet[t];
    printf("\n      Preenchendo vetor\n");
    preenchevetor(vet,t);
    float m=mediavetor(vet,t);
    float v=variancia(vet,t,m);
    float divisao=v/t;
    float resultado=sqrt(divisao);
    printf("\nA media:  %.2f\n",m);
    printf("\nA variancia:  %.2f\n",v);
    printf("\nA divisao da variancia por n : %.2f\n",divisao);
    printf("\nO resultado:  %.2f\n",resultado);

}