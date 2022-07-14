#include <stdio.h>
#include <stdlib.h>
void somaddascolunas(int *v,int **p,int *b,int n){
    int soma=0;
    for(int i=0;i<n;i++){
        p[i]=v+i*n;
        soma=0;
        for(int j=0;j<n;j++){
            soma+=p[i][j];
        }
        b[i]=soma;
    }
}
void main (){
    int n;
    printf("Digite um valor para n:");
    scanf("%d",&n);
    int *a,**a1,*b;
    a= (int *) malloc(n*n*sizeof(int));
    if(a==NULL){
        printf("\nMemoria Insuficiente");
        exit(1);
    }
    a1= (int **) malloc(n * sizeof(int *));
    if(a1==NULL){
        printf("\nMemoria Insuficiente");
        exit(1);
    }
    b= (int *) malloc(n* sizeof(int));
    if(b==NULL){
        printf("\nMemoria Insuficiente");
        exit(1);
    }
    printf("\n      Matriz:\n");
    for(int i=0;i<n;i++){
        *(a1+i)= a+i*n;
        for(int j=0;j<n;j++){
            a1[i][j]=j+1;
            printf("%d  ",a1[i][j]);
        }
        printf("\n");
    }
    somaddascolunas(a,a1,b,n);
    printf("\nVetor B :");
    for(int i=0;i<n;i++){
        printf("%d,",b[i]);
    }
    free(a);
    free(a1);
    free(b);
    a=NULL;
    a1=NULL;
    b=NULL;
}