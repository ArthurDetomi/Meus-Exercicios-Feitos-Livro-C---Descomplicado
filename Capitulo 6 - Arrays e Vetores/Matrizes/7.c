#include <stdio.h>
void mostrarmatriz(int mat[][3],int l,int c){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("%d   ",mat[i][j]);
        }
        printf("\n");
    }
}
int somardiagsec(int mat[][3],int l,int c){
    int soma=0;
    for(int i=2;i>-1;i--){
        for(int j=2;j>-1;j--){
            if(i==j){
                soma+=mat[i][j];
            }
        }
    }
    return soma;
}
void main (){
    int const l=3,c=3;
    int mat[3][3]={{0,1,2},{3,4,5},{6,7,8}};
    printf("\nMostrando matriz:\n");
    mostrarmatriz(mat,l,c);
    int s=somardiagsec(mat,l,c);
    printf("\nA soma da diagonal secundaria eh : %d\n",s);
}