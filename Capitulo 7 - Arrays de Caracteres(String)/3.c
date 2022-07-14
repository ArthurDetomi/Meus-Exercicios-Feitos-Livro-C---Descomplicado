#include <stdio.h>
#include <string.h>
int tamanhostring(char str[]){
    int i=0;
    for(i=0;str[i]!='\0';i++);
    return i;
}
void main (){
    char str1[50];
    printf("\nDigite uma palavra :");
    gets(str1);
    printf("\nTamanho da palavra eh: %d\n",tamanhostring(str1));
}