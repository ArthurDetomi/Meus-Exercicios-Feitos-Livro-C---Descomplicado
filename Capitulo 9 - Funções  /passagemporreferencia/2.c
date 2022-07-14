#include <stdio.h>
#include <math.h>
struct esfera{
    float volume,raio,area,pi;
};
void calc_vol_area(struct esfera *x){
    x->volume=(4*x->pi*pow(x->raio,3))/3;
    x->area=4*x->pi*pow(x->raio,3);
}
void main (){
    struct esfera a;
    a.pi=3.1414592;
    printf("\nDigite o valor do raio da esfera:");
    scanf("%f",&a.raio);
    calc_vol_area(&a);
    printf("\nVolume esfera: %.2f\nArea Esfera: %.2f\n",a.volume,a.area);
}