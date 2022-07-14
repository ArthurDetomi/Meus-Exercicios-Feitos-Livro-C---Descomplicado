#include <stdio.h>
#include <string.h>
void inverterstring(char str[],int tam){
    for(int i=tam;i>=0;i--){
        printf("%c",str[i]);
    }
}
void main(){
    char str[50];
    printf("\nDigite uma palavra :");
    gets(str);
    int tam=strlen(str);
    printf("\nPalavra ao contrario :");
    inverterstring(str,tam);
    printf("\n\n");
}
