#include <stdio.h>
#include <stdlib.h>
void multiplicavetor(int *a,int *b,int *c,int *n){
    for(int i=0;i<(*n);i++){
        a[i]=i;
        b[i]=i;
        c[i]=a[i]*b[i];
        printf("%d,",c[i]);
    }
}
void main (){
    int n;
    printf("\nDigite um valor para n:");
    scanf("%d",&n);
    int *a,*b,*c;
    a= (int *) malloc(n *sizeof(int));
    if(a==NULL){
        printf("\nMemoria Insuficiente");
        exit(1);
    }
    b= (int *) malloc(n *sizeof(int));
    if(b==NULL){
        printf("\nMemoria Insuficiente");
        exit(1);
    }
    c= (int *) malloc(n *sizeof(int));
    if(c==NULL){
        printf("\nMemoria Insuficiente");
        exit(1);
    }
    printf("\nVetor:");
    multiplicavetor(a,b,c,&n);
    free(a);
    free(b);
    free(c);
    a=NULL;
    b=NULL;
    c=NULL;
    printf("\n\n");
}