#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main (){
    FILE *arq;
    int cont=0;
    char c,nomearquivo[50];
    printf("\nDigite o nome do arquivo:");
    gets(nomearquivo);
    arq= fopen(nomearquivo,"r");
    if(arq==NULL){
        printf("\nErro na abertura do arquivo");
        exit(1);
    }
    printf("\n      Lendo Arquivo:\n");
    while((c=fgetc(arq))!= EOF){
        printf("%c",c);
        if(c=='\n')
            cont++;
    }
    printf("\nO arquivo possui %d linhas",cont);
    fclose(arq);
}