#include <stdio.h>
void preenchematriz(int mat[][10],int const *l,int const *c){
    int x;
    for(int i=0;i<*l;i++){
        for(int j=0;j<*c;j++){
            mat[i][j]=1;
        }
    }
}
int somamatriz(int mat[][10],int const *l,int const *c,int *soma){
    for(int i=0;i<*l;i++){
        for(int j=0;j<*c;j++){
            *soma+=mat[i][j];
        }
    }
    return *soma;
}
void mostrarmatriz(int mat[][10],int const *l,int const *c){
    for(int i=0;i<*l;i++){
        for(int j=0;j<*c;j++){
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
}
void main (){
    int  const l=10,c=10;
    int a[l][c],soma=0;
    preenchematriz(a,&l,&c);
    mostrarmatriz(a,&l,&c);
    printf("\n A soma de todos os elementos da matriz eh : %d\n",somamatriz(a,&l,&c,&soma));
}