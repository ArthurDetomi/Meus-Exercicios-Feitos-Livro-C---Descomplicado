#include <stdio.h>
void preenchematriz(int mat[][6],int const *tam){
    for(int i=0;i<*tam;i++){
        for(int j=0;j<*tam;j++){
            mat[i][j]=rand()%10;
        }
    }
}
void mostrarmatriz(int mat[][6],int const *tam){
    for(int i=0;i<*tam;i++){
        for(int j=0;j<*tam;j++){
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
}
void somadiagonais(int mat[][6],int const *tam,int *somadiag1,int *somadiag2){
    int cont=*tam-1;
    for(int i=0;i<*tam;i++){
        *somadiag2+=mat[i][cont];
        for(int j=0;j<*tam;j++){
            if(i==j){
                *somadiag1+=mat[i][j];
            }
        }
        cont--;
    }
}

void main (){
    int const tam=6;
    int mat[tam][tam],somadiagonal1=0,somadiagonal2=0;
    preenchematriz(mat,&tam);
    printf("\n  Matriz Formada:\n");
    mostrarmatriz(mat,&tam);
    somadiagonais(mat,&tam,&somadiagonal1,&somadiagonal2);
    printf("\nSoma diagonal 1: %d\nSoma diagonal 2: %d\n",somadiagonal1,somadiagonal2);
}