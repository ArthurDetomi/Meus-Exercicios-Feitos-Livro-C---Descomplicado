#include <stdio.h>
#include <stdlib.h>
void main (){
    FILE *pa1,*pa2,*novoarq;
    char nomearquivo1[50],nomearquivo2[50];
    char c;
    printf("\n Digite o nome do primeiro arquivo :");
    gets(nomearquivo1);
    printf("\n Digite o nome do segundo arquivo :");
    gets(nomearquivo2);
    pa1= fopen(nomearquivo1,"r");
    if(pa1==NULL){
        printf("\nErro na leitura do arquivo\n");
        exit(1);
    }
    pa2= fopen(nomearquivo2,"r");
    if(pa2==NULL){
        printf("\nErro na leitura do arquivo\n");
        exit(1);
    }
    novoarq= fopen("novoarquivo.txt","w+");
    if(novoarq==NULL){
        printf("\nErro na leitura do arquivo\n");
        exit(1);
    }
    while((c = fgetc(pa1))!= EOF){
        fputc(c,novoarq);
    }

    fclose(novoarq);

    novoarq= fopen("novoarquivo.txt","a");
    if(novoarq==NULL){
        printf("\nErro na leitura do arquivo\n");
        exit(1);
    }

    while((c = fgetc(pa2))!= EOF){
        fputc(c,novoarq);
    }



  
    fclose(pa1);
    fclose(pa2);
    fclose(novoarq);
}