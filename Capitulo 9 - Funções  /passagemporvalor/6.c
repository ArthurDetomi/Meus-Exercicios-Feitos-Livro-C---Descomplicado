#include <stdio.h>
float imc(float h,float peso){
    return peso/(h*h);
}
void main (){
    float h,p;
    printf("\nDigite sua altura e seu peso:");
    scanf("%f %f",&h,&p);
    printf("\nSeu IMC: %.2f",imc(h,p));
}