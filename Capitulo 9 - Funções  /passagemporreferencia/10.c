#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool palindromo(char nome[],int *tam){
    int aux=*tam-1,cont=0;
    for(int i=0;i<*tam;i++){
        if(nome[i]==nome[aux]){
            cont++;
        }
        aux--;
    }
    if(cont==*tam)
        return true;
    else
        return false;
}
void main (){
    char palavra[50];
    printf("\nDigite uma palavra:");
    gets(palavra);
    int tam=strlen(palavra);
    bool verificacao=palindromo(palavra,&tam);
    if(verificacao==true)
        printf("\nEh palindromo\n");
    else 
        printf("\nNao eh palindromo\n");
}
