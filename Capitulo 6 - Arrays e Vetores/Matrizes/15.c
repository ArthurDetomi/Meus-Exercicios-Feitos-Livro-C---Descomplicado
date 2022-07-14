#include <stdio.h>
#include <math.h>
void mostrarmatriz(int mat[][5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
}
void matrizaoquadrado(int mat[][5],int mat2[][5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            mat2[i][j]=pow(mat[i][j],2);
        }
    }
}
void main (){
    int mat[5][5],mat2[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            mat[i][j]=rand()%10;
        }
    }
    printf("\n  Matriz\n");
    mostrarmatriz(mat);
    matrizaoquadrado(mat,mat2);
    printf("\n  Matriz ao quadrado\n");
    mostrarmatriz(mat2);
    printf("\n");
}