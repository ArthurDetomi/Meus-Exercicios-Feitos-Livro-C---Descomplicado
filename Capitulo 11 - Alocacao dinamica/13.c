#include <stdio.h>
#include <stdlib.h>
void desenho(int *v,int **p,int *n){
    int cont=1,aux=1,cont2=(*n)-1;
    for(int i=0;i<(*n);i++){
        *(p+i)= v+i*(*n);
        for(int j=cont;j<(*n);j++){
            p[i][j]=1;
        }
        cont++;
    }
    for(int i=(*n);i>=0;i--){
        *(p+i)= v+i*(*n);
        for(int j=cont2;j>=0;j--){
            p[i][j]=-1;
        }
        cont2--;
    }
}
void mostrarmatriz(int *v,int **p,int *n){
    for(int i=0;i<(*n);i++){
        *(p+i)= v+i*(*n);
        for(int j=0;j<(*n);j++){
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
    p= (int **) calloc(n,sizeof(int **));
    desenho(v,p,&n);
    printf("\n  Matriz:\n");
    mostrarmatriz(v,p,&n);
    free(v);
    free(p);
    v=NULL;
    p=NULL;
}