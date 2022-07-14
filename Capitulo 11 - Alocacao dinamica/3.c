#include <stdio.h>
#include <stdlib.h>
struct cadastro{ 
    char nome[50],endereco[50];
    int idade;
};
void preenchervetor(struct cadastro *p,int n){
    for(int i=0;i<n;i++){
        printf("\nDigite seu nome :");
        scanf(" %s",(p+i)->nome);
        printf("\nDigite seu endereco :");
        scanf(" %s",(p+i)->endereco);
        printf("\nDigite sua idade :");
        scanf("%d",&(p+i)->idade);
    }
}
void mostrarvetor(struct cadastro *p,int n){
    for(int i=0;i<n;i++){
        printf("\nAluno %d",i);
        printf("\nNome: %s\nEndereco: %s\n Idade: %d\n",(p+i)->nome,(p+i)->endereco,(p+i)->idade);
    }
}
void main (){
    int n;
    printf("\nDigite um valor para n :");
    scanf("%d",&n);
    struct cadastro *p;
    p=malloc(n * sizeof(int));
    if(p==NULL){
        printf("\nErro:Memoria Insuficiente\n");
        system("sleep 1");
        exit(1);
    }
    preenchervetor(p,n);
    mostrarvetor(p,n);
    free(p);
    p=NULL;
}