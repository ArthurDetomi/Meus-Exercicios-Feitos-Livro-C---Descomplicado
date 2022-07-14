#include <stdio.h>
#include <stdlib.h>
void diagonalprincipal(int *v,int **p,int n){
    for(int i=0;i<n;i++){
        p[i]= v+i *n;
        for(int j=0;j<n;j++){
            if(i==j)
                p[i][j]=1;
        }
    }
}
void mostrarmatriz(int *v,int **p,int n){
    for(int i=0;i<n;i++){
        p[i]= v+i *n;
        for(int j=0;j<n;j++){
            printf("%d  ",p[i][j]);
        }
        printf("\n");
    }
}
void main (){
    int n;
    printf("\nDigite um valor para n:");
    scanf("%d",&n);
    int *v,**p;
    v= (int *) calloc(n*n,sizeof(int));
    if(v==NULL){
        printf("\nMemoria Insuficiente\nFim programa...");
        exit(1);
    }
    p= (int **) calloc(n,sizeof(int *));
    if(p==NULL){
        printf("\nMemoria Insuficiente\nFim programa...");
        exit(1);
    }
    diagonalprincipal(v,p,n);
    printf("\n      Matriz:\n");
    mostrarmatriz(v,p,n);
    free(v);
    free(p);
    v=NULL;
    p=NULL;
}
