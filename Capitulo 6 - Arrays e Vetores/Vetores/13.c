#include <stdio.h>
int verificarseexiste(int vet1[],int tam,int val){
    int cont=0;
    for(int i=0;i<tam;i++){
        if(vet1[i]==val)
            cont++;
    }
    if(cont==0)
        return 1;
    else 
        return 0;
}
void mostrarvetor(int vet2[],int tam){
    for(int i=0;i<tam;i++){
        printf("%d ,",vet2[i]);
    }
}
void main (){
    int const t=10;
    int n,vet[t];
    for(int i=0;i<t;i++){
        inicio:
        printf("\nDigite um valor :");
        scanf("%d",&n);
        if(verificarseexiste(vet,i,n)==1){
            vet[i]=n;
        }else{ 
            printf("\nValor digitado ja existente, Digite outro valor novamente..\n");
            goto inicio;
        }
    }
    printf("\nMostrando o vetor montado :");
    mostrarvetor(vet,t);
}