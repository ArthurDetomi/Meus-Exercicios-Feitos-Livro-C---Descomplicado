#include <stdio.h>
#include <math.h>
void equacao2grau(int *a,int *b,int *c,float *delta,float *x1,float *x2){
    int b1=*b,a1=*a,c1=*c;
    *delta=pow(b1,2)-1*(4*a1*c1);
    if(*delta==0){
        *x1=(-1*b1+sqrt(*delta))/(2*a1);
    }
    printf("\ndelta = %.2f",*delta);
    if(*delta>0){
        *x1=(-1*b1+sqrt(*delta))/(2*a1);
        *x2=(-1*b1-sqrt(*delta))/(2*a1);
    }
}
void main (){
    int a,b,c;
    float delta,x1=0,x2=0;
    inicio:
    printf("\nDigite o valor de a:");
    scanf("%d",&a);
    if(a<0){
        printf("\nA não pode ser menor que 0\nNao eh uma equacao do segundo grau\n Digite novamente...\n");
        goto inicio;
    }
    printf("\nDigite o valor de b:");
    scanf("%d",&b);
    printf("\nDigite o valor de c:");
    scanf("%d",&c);
    equacao2grau(&a,&b,&c,&delta,&x1,&x2);
    printf("\n      Solucao:\n");
    if(delta<0)
        printf("\nNao existe raiz real\n");
    if(delta==0)
        printf("\nApenas uma raiz real");
        printf("\nA raiz da funcao eh: %.2f\n",x1);
    if(delta>0)
        printf("\nRaizes:%.2f e %.2f\n",x1,x2);
}