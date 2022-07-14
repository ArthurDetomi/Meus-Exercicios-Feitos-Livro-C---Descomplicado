#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void invertestring(char *p,int tam){
    printf("\n Nova palavra:");
    for(int i=tam;i>=0;i--){
        printf("%c",p[i]);
    }
    printf("\n\n");
}
void main (){
    char *p;
    int n;
    printf("\n Digite quantos caracteres ira armazenar:");
    scanf("%d",&n);
    p=(char *) malloc(n* sizeof(char));
    if(p==NULL){
        printf("\nMemoria Insuficiente\nFim programa...");
        exit(1);
    }
    getchar();
    printf("\nDigite uma string:");
    gets(p);
    int tam=strlen(p);
    invertestring(p,tam);
    free(p);
    p=NULL;
}