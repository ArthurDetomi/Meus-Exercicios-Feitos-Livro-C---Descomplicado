#include <stdio.h>
void mostrarmatriz(int mat[][5],int l,int c){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
           printf("%d   ",mat[i][j]);
        }
        printf("\n");
    }
}
void main(){
    int const l=5,c=5;
    int mat[l][c];
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                mat[i][j]=1;
            }else
                mat[i][j]=0;
        }
    }
    printf("\nMostrando Matriz :\n");
    mostrarmatriz(mat,l,c);
    printf("\nFim do programa\n");
}