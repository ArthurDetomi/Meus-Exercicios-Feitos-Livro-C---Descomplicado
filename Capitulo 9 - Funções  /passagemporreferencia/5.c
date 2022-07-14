#include <stdio.h>
#include <math.h>
void desviopadrao(float vet[],int const *tam,float *soma,float *media,float *vr){
    float aux=0;
    for(int i=0;i<*tam;i++){
        printf("\nDigite um numero:");
        scanf("%f",&vet[i]);
    }
    for(int i=0;i<*tam;i++){
        *soma+=vet[i];
    }
    *media=*soma/ *tam;
    for(int i=0;i<*tam;i++){
        float v=vet[i]-*media;
        aux+=v*v;
    }
    *vr=sqrt(aux / *tam);
}
void main (){
    int const tam=5;
    float vet[tam],media,soma=0,vr=0;
    desviopadrao(vet,&tam,&soma,&media,&vr);
    printf("\nO desvio padrao eh : %.2f",vr);
}