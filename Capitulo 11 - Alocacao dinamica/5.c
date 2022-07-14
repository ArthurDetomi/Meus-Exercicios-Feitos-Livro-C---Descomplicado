#include <stdio.h>
#include <stdlib.h>
void main (){
    int n=-1;
    inicio:
    printf("\nDigite um valor para n:");
    scanf("%d",&n);
    if(n<0){
        printf("\nDigite um valor positivo");
        goto inicio;
    }
    int *p;
    p= (int *) malloc(n*sizeof(int));
    if(p==NULL){
        printf("\nMemoria Insuficiente\nFim Programa");
        exit(1);
    }
    for(int i=0;i<n;i++){
        do{
            printf("\nDigite um valor:");
            scanf("%d",&*(p+i));
            if(*(p+i)<2)
                printf("\nValor invalido, digite um valor maior ou igual a 2");
        }while(*(p+i)<2);
    }
    //mostrando vetor//
    printf("\nVetor:");
    for(int i=0;i<n;i++){
       printf("%d,",*(p+i));    
    }
    free(p);
    p=NULL;
}
