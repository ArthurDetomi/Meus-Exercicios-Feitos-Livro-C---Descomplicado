#include <stdio.h>
#include <stdlib.h>
void somavetor(int *a,int *b,int *c,int n){
    for(int i=0;i<n;i++){
        *(c+i)=*(a+i)+*(b+i);
    }
}
void mostravetor(int *c,int n){
    printf("\nVetor C:");
    for(int i=0;i<n;i++){
       printf("%d,",*(c+i));
    }
}
void main (){
    int n=10;
    int *a,*b,*c;
    a=(int *)malloc(10* sizeof(int));
    if(a==NULL){
        printf("\nMemoria Insuficiente");
        exit(1);
    }
    b=(int *) malloc(10* sizeof(int));
    if(b==NULL){
        printf("\nMemoria Insuficiente");
        exit(1);
    }
    c=(int *) malloc(10* sizeof(int));
    if(c==NULL){
        printf("\nMemoria Insuficiente");
        exit(1);
    }
    printf("oi");
    for(int i=0;i<n;i++){
        *(a+i)=i;
    }
    for(int i=0;i<n;i++){
        *(b+i)=i;
    }
    
    somavetor(a,b,c,n);
    mostravetor(c,n);
    free(a);
    free(b);
    free(c);
    a=NULL;
    b=NULL;
    c=NULL;
}