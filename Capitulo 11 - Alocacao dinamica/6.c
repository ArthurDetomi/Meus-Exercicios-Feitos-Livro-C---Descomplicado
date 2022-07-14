#include <stdio.h>
#include <stdlib.h>
int contem(int **p,int n,int l,int c){
    int cont=0;
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            if(p[i][j]==n){
                cont++;
                if(cont==1){
                    break;
                }
            }
        }
    }
    if(cont==0)
        return 0;
    else
        return 1;
}
void main (){
    int l,c,i,j;
    printf("\nDigite um valor para linha e colunas");
    scanf("%d %d",&l,&c);
    int *p1,**p2;
    p1= (int *) malloc(l * c * sizeof(int));
    if(p1==NULL){
        printf("\nMemoria insuficiente");
        exit(1);
    }
    p2=(int **) malloc(l * sizeof(int *));
    if(p2==NULL){
        printf("\nMemoria insuficiente");
        exit(1);
    }
    for(i=0;i<l;i++){
        p2[i]=p1+i*c;
        for(j=0;j<c;j++){
            printf("Digite um valor :");
            scanf("%d",&p2[i][j]);
        }
    }
    printf("\nMatriz:\n");
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("%d  ",p2[i][j]);
        }
        printf("\n");
    }
    int n;
    printf("Digite um valor :");
    scanf("%d",&n);
    printf("\nRetornando : %d      \n",contem(p2,n,l,c));

    free(p1);
    free(p2);
}