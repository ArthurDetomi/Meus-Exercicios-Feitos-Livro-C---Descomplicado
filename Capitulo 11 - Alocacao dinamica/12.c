#include <stdio.h>
#include <stdlib.h>
void diagonalsecundaria(int *v,int **p,int *n){
    int cont=(*n)-1;
    for(int i=0;i<*n;i++){
        p[i]= v+i*(*n);
        for(int j=*n;j>=0;j--){
            if(j==cont){
                p[i][j]=1;
            }
        }
        cont--;
    }
}
void mostrarmatriz(int *v,int **p,int *n){
    for(int i=0;i<*n;i++){
        p[i]= v+i*(*n);
        for(int j=0;j<*n;j++){
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
    p=(int **) calloc(n,sizeof(int *));
    diagonalsecundaria(v,p,&n);
    printf("\nMatriz :\n");
    mostrarmatriz(v,p,&n);
    printf("\n\n");
    free(p);
    free(v);
    p=NULL;
    v=NULL;
}