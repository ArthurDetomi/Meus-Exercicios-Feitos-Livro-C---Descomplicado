#include <stdio.h>
#include <stdlib.h>
preenchevetor(int *p,int *n){
    for(int i=0;i<*n;i++){
        *(p+i)=*n;
    }
    printf("\nVetor:");
    for(int i=0;i<*n;i++){
        printf("%d,",*(p+i));
    }
}
void main (){
    int n,*p;
    printf("\nDigite um valor para n:");
    scanf("%d",&n);
    if(n<=0){
        p=NULL;
        printf("\nPonteiro NULO\nFim programa");
        exit(1);
    }
    p= (int *) malloc(n* sizeof(int));
    if(p==NULL){
        printf("\nMemoria Insuficiente\nFim programa");
        exit(1);
    }
    preenchevetor(p,&n);
    printf("\n\n");
    free(p);
    p=NULL;
}