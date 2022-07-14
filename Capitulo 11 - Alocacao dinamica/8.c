#include <stdio.h>
#include <stdlib.h>
void preenchervetor(int *p, int *n){
    if(*n<=0){
        p=NULL;
        printf("\nValor invalido");
        exit(1);
    }else{
        p= (int *) malloc(*n * sizeof(int));
        if(p==NULL){
            printf("\nMemoria Insuficiente");
            exit(1);
        }else   
            printf("\nO vetor foi criado\n");
    }
    free(p);
    p=NULL;
}
void main (){
    int n;
    printf("\nDigite um valor para n:");
    scanf("%d",&n);
    int *p;
    preenchervetor(p,&n);
    free(p);
    p=NULL;
}