#include <stdio.h>
void main (){
    float vet[10],*p=vet;
    for(int i=0;i<10;i++){
        printf("\n%p\n",p[i]);
    }
}
