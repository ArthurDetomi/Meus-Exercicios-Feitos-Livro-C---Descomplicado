#include <stdio.h>
#include <string.h>
struct endereco{
    char rua[50];
    int numero;
};
typedef struct cadastro{
    char nome[50];
    int idade;
    struct endereco ender;
}cad;
void funccadastro(char nome[],char rua[],int idade, int numero){
    printf("\nDigite seu nome:");
    gets(nome);
    fflush(stdin);
    printf("\nDigite o nome da sua rua:");
    gets(rua);
    printf("\nDigite sua idade:");
    scanf("%d",&idade);
    printf("\nDigite o numero da sua casa:");
    scanf("%d",&numero);
}
void main (){
    cad c;
    funccadastro(c.nome,c.ender.rua,c.idade,c.ender.numero);
    printf("\nNome: %s\nIdade: %d\n Rua: %s\n Numero da casa: %d\n",c.nome,c.idade,c.ender.rua,c.ender.numero);
}