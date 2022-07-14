#include <stdio.h>
#include <stdlib.h>
void produtomatrizvetor(int *v,int **p,int *b,int *c,int n){
    int soma=0;
    for(int i=0;i<n;i++){
        p[i]= v+i*n;
        soma=0;
        for(int j=0;j<n;j++){
            p[i][j]*=b[j];
            soma+=p[i][j];
        }
        c[i]=soma;
    }
}
void main (){
    int n; 
    printf("\nDigite o valor de n:");
    scanf("%d",&n);
    int *a1,**a2,*b,*c;
    //Criando matrizes e vetores//
    a1= (int *) malloc(n*n*sizeof(int));
    if(a1==NULL){
        printf("\nMemoria Insuficiente");
        exit(1);
    }
    a2=(int **) malloc(n*sizeof(int *));
    if(a2==NULL){
        printf("\nMemoria Insuficiente");
        exit(1);
    }
    b= (int *) malloc(n*sizeof(int));
    if(b==NULL){
        printf("\nMemoria Insuficiente");
        exit(1);
    }
    c= (int *) malloc(n*sizeof(int));
    if(c==NULL){
        printf("\nMemoria Insuficiente");
        exit(1);
    }
    //exibindo//
    printf("\n      Matriz A\n");
    for(int i=0;i<n;i++){
        a2[i]= a1+i*n;
        for(int j=0;j<n;j++){
            a2[i][j]=j+1;
            printf("%d  ",a2[i][j]);
        }
        printf("\n");
    }
    printf("\nVetor B:");
    for(int i=0;i<n;i++){
        *(b+i)=i+1;
        printf("%d,",*(b+i));
    }
    produtomatrizvetor(a1,a2,b,c,n);
    printf("\nVetor C:");
    for(int i=0;i<n;i++){
        printf("%d,",c[i]);
    }
    free(a1);
    free(a2);
    free(b);
    free(c);
    a1=NULL;
    a2=NULL;
    b=NULL;
    c=NULL;
     printf("\n\n");
}