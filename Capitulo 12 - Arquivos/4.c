#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main (){
    FILE *arq1;
    int cont=0,cont2=0,fim=0;
    char nomearq1[50],palavra[50];
    printf("\nDigite o nome de um arquivo:");
    gets(nomearq1);
    printf("\nDigite o nome de uma palavra para busca:");
    gets(palavra);
    int tam=strlen(palavra);
    arq1 = fopen(nomearq1,"r");
    if(arq1==NULL){
        printf("\nErro ao abrir arquivo");
        exit(1);
    }
    char c;
    while(1){
        volta:
        cont=0;
        for(int i=0;i<tam;i++){
            c=fgetc(arq1);
            if(c==' ' || c=='\n'){
               goto volta;
            }
            if(c==palavra[i])
                cont++;
        }
        if(cont==tam){
            cont2++;
        }
        if( c== EOF){
            break;
        }
    }
    printf("O numero de vezes q a %s aparece : %d\n",palavra,cont2);
    fclose(arq1);
}
