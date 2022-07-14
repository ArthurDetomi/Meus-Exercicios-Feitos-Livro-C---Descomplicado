#include <stdio.h>
#include <stdlib.h>
void preenchevetor(int *p,int n){
    for(int i=0;i<n;i++){
        *(p+i)=i;
        printf("%d,",*(p+i));
    }
}
void main (){
    int n;
    printf("\nDigite o valor de n:");
    scanf("%d",&n);
    int *p;
    p= (int *) malloc(n * sizeof(int));
    if(p==NULL){
        printf("\nMemoria Insuficiente");
        exit(1);
    }
    printf("\nVetor:");
    preenchevetor(p,n);
    free(p);
    p=NULL;
}