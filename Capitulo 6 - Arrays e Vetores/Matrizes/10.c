#include <stdio.h>
#include <stdlib.h>
void atribuirmatriz(int mat[10][3]){
    for(int i=0;i<10;i++){
        for(int j=0;j<3;j++){
            printf("\nAluno %d, nota da prova %d:",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
        system("clear");
    }
}
void mostrarmatriz(int mat[10][3]){
    for(int i=0;i<10;i++){
        for(int j=0;j<3;j++){
            printf("%d   ",mat[i][j]);
        }
        printf("\n");
    }
}
void main (){
    int const l=10,c=3;
    int mat[l][c];
    printf("\nPreenchendo notas...\n");
    atribuirmatriz(mat);
    printf("\n      Quadro de notas:\n");
    mostrarmatriz(mat);
    int pos,cont1=0,cont2=0,cont3=0;
    for(int i=0;i<l;i++){
        int menor=10;
        for(int j=0;j<c;j++){
            if(mat[i][j]<menor){
                menor=mat[i][j];
                pos=j;
            }
        }
        if(pos==0)
            cont1++;
        if(pos==1)
            cont2++;
        if(pos==2)
            cont3++;
    }
    printf("\nQtd de alunos cuja pior nota foi na prova 1 : %d",cont1);
    printf("\nQtd de alunos cuja pior nota foi na prova 2 : %d",cont2);
    printf("\nQtd de alunos cuja pior nota foi na prova 3 : %d\n",cont3);



}