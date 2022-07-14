#include <stdio.h>
void separar(float *n1,int *n2){
    *n2=*n1;
    *n1-=*n2;
}
void main (){
    float n;
    int a;
    printf("\nDigite um valor :");
    scanf("%f",&n);
    separar(&n,&a);
    printf("\nparte fracionaria: %.2f\nparte inteira: %d\n",n,a);
}