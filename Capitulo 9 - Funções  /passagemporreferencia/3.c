#include <stdio.h>
int somaarray(int v[],int tam,int *soma){
    for(int i=0;i<tam;i++){
        *soma+=v[i];
    }
    return *soma;
}
void main (){
    int const tam=10;
    int soma=0; 
    int v[10]={0,1,2,3,4,5,6,7,8,9};
    
    printf("\nSoma do array: %d \n",somaarray(v,tam,&soma));
    printf("\nSoma= %d\n",soma);
}