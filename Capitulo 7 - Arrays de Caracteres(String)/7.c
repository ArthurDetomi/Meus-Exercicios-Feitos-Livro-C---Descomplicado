#include <stdio.h>
#include <string.h>
void inverte(char str1[],char str2[],int tam){
    int cont=0;
    for(int i=tam-1;i>=0;i--){
        str2[cont]=str1[i];
        cont++;
    }
}

void main (){
    char str1[50],str2[50];
    printf("\nDigite uma palavra :");
    gets(str1);
    int tam=strlen(str1);
    char str2[tam];
    inverte(str1,str2,tam);
    printf("\n%s , %s",str1,str2);
    if(strcmp(str1,str2)==0)
        printf("\nEh palindromo\n");
    else
        printf("\nNao eh palindromo\n");
}