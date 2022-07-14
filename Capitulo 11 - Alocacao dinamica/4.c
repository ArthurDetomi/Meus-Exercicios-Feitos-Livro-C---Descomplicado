#include <stdio.h>
#include <stdlib.h>
void main (){
    int n;
    printf("\nDigite o tamanho do vetor :");
    scanf("%d",&n);
    int *p;
    p= (int *) malloc(n * sizeof(int));
    if(p==NULL){
        printf("\nMemoria Insuficiente\n");
        system("sleep 1");
        exit(1);
    }
    for(int i=0;i<n;i++){
        printf("\nDigite um valor:");
        scanf("%d",&*(p+i));
    }
    printf("\nVetor:");
    for(int i=0;i<n;i++){
        printf("%d,",*(p+i));
    }
    free(p);
    p=NULL;
}