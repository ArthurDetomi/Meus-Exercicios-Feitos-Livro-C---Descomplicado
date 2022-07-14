#include <stdio.h>
void matriztransposta(int mat1[][5],int mat2[][5],int *l,int *c){
    //preenchendo matriz e mostrando
    printf("\nMatriz 1:\n");
    for(int i=0;i<*l;i++){
        for(int j=0;j<*c;j++){
            mat1[i][j]=rand()%10;
            printf("%d  ",mat1[i][j]);
        }
        printf("\n");
    }
    //transpondo para outra matriz
    printf("\nMatriz transposta:\n");
    int cont2=0,aux,cont;
    for(int i=cont2;i<*l;i++){
        cont=1;
        cont2=0;
        for(int j=0;j<*c;j++){
            if(cont<5)
                aux=mat1[j][i];
            mat1[j][i]=mat1[i][j];
            mat1[i][cont]=aux;
        }
        cont2++;
        cont++;
    }
     for(int i=0;i<*l;i++){
        for(int j=0;j<*c;j++){
            printf("%d  ",mat1[i][j]);
        }
        printf("\n");
    }

}
void main (){
    int l=5,c=5;
    int a[l][c],b[l][c];
    matriztransposta(a,b,&l,&c);

}