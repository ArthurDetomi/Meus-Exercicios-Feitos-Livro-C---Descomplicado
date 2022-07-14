#include <stdio.h>
#include <string.h>
void uppercase(char nome[],int *tam){
    for(int i=0;i<*tam;i++){
        if(nome[i]>=97 && nome[i]<=122){
            nome[i]-=32;
        }
    }
}
void main (){
    char palavra[50];
    printf("\nDigite uma palavra:");
    gets(palavra);
    int tam=strlen(palavra);
    uppercase(palavra,&tam);
    printf("\nNova palavra : %s",palavra);
}