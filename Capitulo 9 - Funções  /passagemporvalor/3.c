#include <stdio.h>
float convert_f_para_c(float f){
    return (f-32.0)*(5.0/9.0);
}
void main(){
    float f;
    printf("\nDigite uma temperatura em fahrenheit :");
    scanf("%f",&f);
    printf("\nA temperatura em Celsius eh %.2f\n",convert_f_para_c(f));
}