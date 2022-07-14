#include <stdio.h>
void main (){
    int vet[5]={1,2,3,4,5},*p=vet;
    for(int i=0;i<5;i++){
        if(p[i]%2==0)
            printf("\nposicao %d = %p ",i,p[i]);
    }
}