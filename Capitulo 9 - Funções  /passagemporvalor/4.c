#include <stdio.h>
float volumecilindro(float r,float h,float pi){
    r*=r;
    return pi*r*h;
}
void main(){
    float const pi=3.1414592;
    float r,h;
    printf("\nDigite o raio e a altura do cilindro:");
    scanf("%f %f",&r,&h);
    printf("\nO volume do cilindro eh: %.2f m³",volumecilindro(r,h,pi));
}