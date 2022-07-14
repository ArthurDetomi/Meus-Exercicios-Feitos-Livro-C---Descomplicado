#include <stdio.h>
#include <stdlib.h>
struct aluno{
    int nmatr;
    char nome[50];
    float notas[3];
};
void main (){
    printf("\nO tamanho da estrutura aluno : %d\n",sizeof(struct aluno));

}