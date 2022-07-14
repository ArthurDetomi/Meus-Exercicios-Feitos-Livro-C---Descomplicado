#include <stdio.h>
struct aluno{
    int numeromatricula;
    char nome[50];
    float nota[3],media;
};
void cadastrarnotas(struct aluno total[],int const *tam){
    for(int i=0;i<*tam;i++){
        printf("\nCadastro Aluno %d",i+1);
        printf("\nDigite seu nome :");
        scanf("%s",total[i].nome);
        printf("\nDigite seu numero de matricula :");
        scanf("%d",&total[i].numeromatricula);
        float somaaux=0;
        for(int j=0;j<3;j++){
            printf("\nNota prova %d:",j+1);
            scanf("%f",&total[i].nota[j]);
            somaaux+=total[i].nota[j];
        }
        total[i].media=(somaaux)/3;
    }
}
void maiormediaturma(struct aluno total[],int const *tam){
    float maior=total[0].media;
    int indice=0;
    for(int i=0;i<*tam;i++){
        if(total[i].media>maior){
            maior=total[i].media;
            indice=i;
        }
    }
    printf("\nAluno com maior media:");
    printf("\nNumero de matricula: %d",total[indice].numeromatricula);
    printf("\nNome: %s",total[indice].nome);
    for(int i=0;i<3;i++){
        printf("\nNota na prova %d: %.2f",i+1,total[indice].nota[i]);
    }
    printf("\nMedia: %.2f",total[indice].media);
    
}
void main (){
    int const tam=5;
    struct aluno ta[tam];
    cadastrarnotas(ta,&tam);
    maiormediaturma(ta,&tam);
}