#include <stdio.h>
#include <string.h>
struct atleta{
    char nome[50];
    int idade;
    float altura;
};
void main(){
    struct atleta a[5];
    int aux,pos=0;
    for(int i=0;i<5;i++){
        printf("\nDigite seu nome :");
        scanf(" %s",a[i].nome);
        printf("\nDigite sua idade :");
        scanf("%d",&a[i].idade);
    }
    printf("\nPor ordem de idade os nome dos atletas:\n");
    for(int i=60;i>0;i--){
        for(int j=0;j<5;j++){
            if(a[j].idade==i){
                printf("\n%s : %d anos\n",a[j].nome,a[j].idade);
            }
        }
        
    }
}