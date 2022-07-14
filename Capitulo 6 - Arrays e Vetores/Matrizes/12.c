#include <stdio.h>
void mostrarmatriz(int mat[][6]){
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(i==j)
                printf("%d+  ",mat[i][j]);
            else
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
}
void main(){
    int mat[6][6];
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            mat[i][j]=rand()%10;
        }
    }
    printf("\n  Matriz:\n");
    mostrarmatriz(mat);
    int soma=0;
    for(int i=0;i<6;i++){
        for(int j=0;j<i;j++){
            soma+=mat[i][j];
        }
    }
    printf("\nA soma debaixo da diagonal : %d\n",soma);
}