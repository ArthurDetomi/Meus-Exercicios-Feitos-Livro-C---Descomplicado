#include <stdio.h>
void atribuirmatriz(int mat[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("\nDigite um valor para matriz:");
            scanf("%d",&mat[i][j]);
        }
    }
}
void mostrarmatriz(int mat[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d   ",mat[i][j]);
        }
        printf("\n");
    }
}
void mostrarvetor(int vet[],int tam){
    for(int i=0;i<tam;i++){
        printf("%d,",vet[i]);
    }
}
void main (){
    int const t=3;
    int vsoma[t],mat[3][3];
    atribuirmatriz(mat);
    printf("\n      Mostrando Matriz\n");
    mostrarmatriz(mat);
    for(int i=0;i<t;i++){
        int soma=0;
        for(int j=0;j<t;j++){
            soma+=mat[j][i];
        }
        vsoma[i]=soma;
    }
    printf("\nVetor :");
    mostrarvetor(vsoma,t);

}