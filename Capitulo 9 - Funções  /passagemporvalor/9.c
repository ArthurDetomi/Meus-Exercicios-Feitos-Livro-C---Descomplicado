#include <stdio.h>
void medias(float notas[],int tam,char c){
    float soma=0,media,p;
    if(c=='A'){
        for(int i=0;i<tam;i++){
            soma+=notas[i];
        }
        media=soma/tam;
        printf("\nA media aritmetica eh: %.2f",media);
    }else{
        for(int i=0;i<tam;i++){
            if(i==0)
                p=5;
            if(i==1)
                p=3;
            if(i==2)
                p=2;
            soma+=(notas[i]*p);
        }
        media=soma/10;
        printf("\nA media aritmetica ponderada eh: %.2f",media);
    }
}
void main (){
    int const tam=3;
    float v[tam];
    char op;
    inicio:
    printf("\nDigite (A)media aritmetica(P)media ponderada:");
    scanf(" %c",&op);
    if(op=='A' || op=='P'){
    }else{
        printf("\nDigite um caracter valido");
        goto inicio;
    }
    for(int i=0;i<tam;i++){
        printf("\nNota %d:",i+1);
        scanf("%f",&v[i]);
    }
    medias(v,tam,op);
}