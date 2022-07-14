#include <stdio.h>
#include <string.h>
int descontodedez(float valor){
    return 0.1*valor;
}
void main (){
    char merc1[10];
    float preco;
    printf("\nDigite o nome da mercadoria :");
    gets(merc1);
    printf("\n Digite o preco da mercadoria :");
    scanf("%f",&preco);
    float d=descontodedez(preco); 
    printf("\nNome da mercadoria: %s\nPreco: %.2f\n Valor do desconto: %.2f\n Preco a vista : %.2f",merc1,preco,d,preco-d);
}