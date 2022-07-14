#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct aluno{
    int n_matri;
    char nome[50];
    float p[3],media;
};
void main(){
    struct aluno a[5];
    for(int i=0;i<5;i++){
        printf("\nDigite seu nome:");
        scanf(" %s",a[i].nome);
        printf("\nDigite seu numero de matricula:");
        scanf("%d",&a[i].n_matri);
        for(int j=0;j<3;j++){
            printf("\nNota prova %d:",j+1);
            scanf("%f",&a[i].p[j]);
        }
    }
    for(int j=0;j<5;j++){
        float soma=0;
        for(int i=0;i<3;i++){
            soma+=a[j].p[i];
        }
        a[j].media=soma/3.0;
    }
    float maior=a[0].media;
    int pos=0;
    for(int i=0;i<5;i++){
        if(a[i].media>maior){
            maior=a[i].media;
            pos=i;
        }
    }
    printf("\nNome do Aluno com maior nota: %s",a[pos].nome);
    for(int i=0;i<3;i++){
        printf("\nNota da prova %d: %.2f",i+1,a[pos].p[i]);
    }
    printf("\n\n");
}
