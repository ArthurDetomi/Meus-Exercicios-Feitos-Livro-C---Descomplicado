#include <stdio.h>
void main (){
    int mat[3][3],*p=mat;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("\n%d %d :%p\n",i,j,p[i]);
        }
    }
}