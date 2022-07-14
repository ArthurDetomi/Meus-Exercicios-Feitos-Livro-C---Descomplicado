#include <stdio.h>
#include <math.h>
void atribuiramatriz(int mat[][10]){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(i<j)
                mat[i][j]=(2*i)+(7*j)-2;
            if(i==j)
                mat[i][j]=3*(pow(i,2))-1;
            if(i>j)
                mat[i][j]=4*(pow(i,3))+5*(pow(j,2));
        }
    }
}
void mostrarmatriz(int mat[][10]){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
}
void main (){
    int mat[10][10];
    printf("\nAtribuindo valores....\n");
    atribuiramatriz(mat);
    printf("\n      Mostrando matriz\n");
    mostrarmatriz(mat);
}