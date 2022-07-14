#include <stdio.h>
#include <string.h>
void nvvarinverte(char str[],int tam){
    char aux,a,b,c;
    int cont=0;
    tam=tam-1;
    for(int i=tam;i>cont;i--){
        aux=str[cont];
        str[cont]=str[i];
        str[i]=aux;
        cont++;
    }
    
}    
void main (){
    char str[50];
    printf("\nDigite uma palavra:");
    gets(str);
    int tam=strlen(str);
    nvvarinverte(str,tam);
    printf("\nNova palavra: %s",str);
}
    