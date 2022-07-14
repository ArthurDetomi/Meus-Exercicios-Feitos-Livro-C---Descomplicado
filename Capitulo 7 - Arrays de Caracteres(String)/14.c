#include <stdio.h>
#include <string.h>
void codificar(char str1[]){
    for(int i=0;str1[i]!='\0';i++){
        if(str1[i]==32)
            continue;
        else
            str1[i]+=3;
    }
}
void descodificar(char str1[]){
    for(int i=0;str1[i]!='\0';i++){
        if(str1[i]==32)
            continue;
        else
            str1[i]-=3;
    }
}
void main(){
    char str1[50];
    printf("\nDigite uma string:");
    gets(str1);
    codificar(str1);
    printf("\nA nova string sera:\n%s\n",str1);
    descodificar(str1);
    printf("\nA string descodificada:\n%s\n",str1);
}