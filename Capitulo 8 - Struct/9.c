#include <stdio.h>
#include <string.h>
struct atleta{
    char nome[50];
    int idade;
    float altura;
};
void main (){
    struct atleta a[5];
    int pos1,pos2,maior1;
    float maior2;
    for(int i=0;i<5;i++){
        printf("\nDigite seu nome :");
        scanf(" %s",a[i].nome);
        printf("\nDigite sua idade :");
        scanf("%d",&a[i].idade);
        printf("\nDigite sua altura :");
        scanf("%f",&a[i].altura);
    }
    for(int i=0;i<5;i++){
        if(i==0){
            maior1=a[i].idade;
            maior2=a[i].altura;
        }
        if(a[i].idade>maior1)
            maior1=a[i].idade;
        if(a[i].altura>maior2)
            maior2=a[i].altura;
    }
    printf("\nO ateta mais velho :");
    for(int i=0;i<5;i++){
        if(a[i].idade==maior1)
            printf("%s ,",a[i].nome);
    }
     printf("\nO ateta mais alto :");
     for(int i=0;i<5;i++){
        if(a[i].altura==maior2)
            printf("%s ,",a[i].nome);
    }
    printf("\n");
    
}