#include <stdio.h>
float volumeesfera(float r){
    float const pi=3.1414592;
    float pot=1;
    for(int i=0;i<3;i++){
        pot*=r;
    }
    return (4*pi*pot)/3;
}
void main (){
    float r;
    printf("\nDigite o valor do raio:");
    scanf("%f",&r);
    printf("\nO volume da esfera eh : %.2f metros³\n",volumeesfera(r));
}