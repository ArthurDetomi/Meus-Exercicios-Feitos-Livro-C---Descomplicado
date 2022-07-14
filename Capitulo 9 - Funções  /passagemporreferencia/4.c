#include <stdio.h>
void recebenotasmedia(float notas[],int const *tam,float *media){
    float soma=0;
    for(int i=0;i<*tam;i++){
        printf("\nAluno %d nota:",i+1);
        scanf("%f",&notas[i]);
    }
    for(int i=0;i<*tam;i++){
        soma+=notas[i];
    }
    *media=soma / *tam;
}
void main (){
    int const tam=10;
    float notas[tam],media;
    recebenotasmedia(notas,&tam,&media);
    printf("\nA media das notas eh: %.2f",media);
}