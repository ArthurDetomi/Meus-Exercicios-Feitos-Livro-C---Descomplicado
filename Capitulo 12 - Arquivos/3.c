#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main (){
    FILE *pa1,*pa2;
    char c;
    char nomearq1[50],nomenovo[50];
    printf("\nDigite o nome do arquivo a ser convertido:");
    gets(nomearq1);
    printf("\nDigite o nome novo arquivo:");
    gets(nomenovo); 
    pa1= fopen(nomearq1,"r");
    if(pa1==NULL){
        printf("\nNao foi possivel abrir o arquivo %s",nomearq1);
        exit(1);
    }
    pa2 = fopen(nomenovo,"w");
    if(pa2==NULL){
        printf("\nNao foi possivel criar o arquivo:'%s' ou escrever nele ",nomenovo);
        exit(1);
    }
    
    while((c = fgetc(pa1))!=EOF){
        if(c>=97 && c<=122){
            c-=32;
            fputc(c,pa2);
        }else
            fputc(c,pa2);
    }
    printf("\nArquivo foi gravado com sucesso !!!\n");  
    fclose(pa1);
    fclose(pa2);
}