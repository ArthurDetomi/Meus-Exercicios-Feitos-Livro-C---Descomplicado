#include <stdio.h>
void mostrarmatriz(int mat[][5]){
    int cont=4;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==j || j==cont)
                printf("%d+  ",mat[i][j]);
            else
                printf("%d  ",mat[i][j]);
        }
        cont--;
        printf("\n");
    }
}
void main (){
    int mat[5][5],x;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            inicio:
            x=rand()%10;
            if(x==0 || x==1)
                mat[i][j]=x;
            else
                goto inicio;
        }
    }
    printf("\n  Matriz:\n");
    mostrarmatriz(mat);
    int soma1=0,soma2=0,cont=4;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i!=j && j!=cont){
                soma1+=mat[i][j];
            }else   
                soma2+=mat[i][j];
        }
        cont--;
    }
    int dif=soma1-soma2;
    printf("\nA diferenca entra os nao e os q estao na diagonal eh : %d\n",dif);

}