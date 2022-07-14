#include <stdio.h>
#include <stdlib.h>
multiplicamatrizes(int *v,int **p,int *v2,int **p2,int *c1,int **c2,int n){
    for(int i=0;i<n;i++){
        c2[i]=c1+i*n;
        p2[i]=v2+i*n;
        p[i]=v+i*n;
        for(int j=0;j<n;j++){
            c2[i][j]= p[i][j]*p2[i][j];
            printf("%d  ",c2[i][j]);
        }
        printf("\n");
    }
}
void main (){
    int n;
    printf("\nDigite o valor de N:");
    scanf("%d",&n);
    int *v,**p,*v2,**p2,*c1,**c2;
    //ini//
    v= (int *) malloc(n*n*sizeof(int));
    if(v==NULL){
        printf("\nMemoria Insuficiente");
        exit(1);
    }
    p= (int **) malloc(n*sizeof(int *));
    if(p==NULL){
        printf("\nMemoria Insuficiente");
        exit(1);
    }
    v2= (int *) malloc(n*n*sizeof(int));
    if(v2==NULL){
        printf("\nMemoria Insuficiente");
        exit(1);
    }
    p2= (int **) malloc(n*sizeof(int *));
    if(p2==NULL){
        printf("\nMemoria Insuficiente");
        exit(1);
    }
    c1= (int *) malloc(n*n*sizeof(int));
    if(c1==NULL){
        printf("\nMemoria Insuficiente");
        exit(1);
    }
    c2= (int **) malloc(n*sizeof(int *));
    if(c2==NULL){
        printf("\nMemoria Insuficiente");
        exit(1);
    }
    //fim//
    printf("\n  Matriz A:\n");
    for(int i=0;i<n;i++){
        p2[i]=v2+i*n;
        p[i]=v+i*n;
        for(int j=0;j<n;j++){
            p2[i][j]=j+1;
            p[i][j]=j+1;
            printf("%d  ",p[i][j]);
        }
        printf("\n");
    }
    printf("\n  Matriz B:\n");
    for(int i=0;i<n;i++){
        p2[i]=v2+i*n;
        for(int j=0;j<n;j++){
            printf("%d  ",p2[i][j]);
        }
        printf("\n");
    }
    printf("\n  Matriz C:\n");
    multiplicamatrizes(v,p,v2,p2,c1,c2,n);

}