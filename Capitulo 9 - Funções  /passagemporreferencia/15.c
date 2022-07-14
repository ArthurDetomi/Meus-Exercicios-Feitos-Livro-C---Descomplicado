#include <stdio.h>
void maioremenor(int vet[],int *tam,int *maior,int *menor){
    *maior=vet[0];
    *menor=vet[0];
    for(int i=0;i<*tam;i++){
        if(vet[i]>*maior)
            *maior=vet[i];
        if(vet[i]<*menor)
            *menor=vet[i];
    }
}

void main (){
    int tam=10,maior,menor;
    int vet[10]={54,21,4,5,6,7,8,99,1,89};
    maioremenor(vet,&tam,&maior,&menor);
    printf("\nO maior valor eh: %d\nO menor valor eh : %d\n",maior,menor);
}