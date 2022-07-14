#include <stdio.h>
#include <string.h>
struct cadastro{
    char nome[50];
    int dia,mes,ano;
};
void main (){
    int const tam=6;
    struct cadastro a[tam];
    int maior=0,menor=0,maiormes=0,maiordia=0,menormes=12,menordia=31;
    for(int i=0;i<tam;i++){
        printf("\nDigite seu nome:");
        scanf(" %s",a[i].nome);
        printf("\nDigite a sua data de nascimento:");
        scanf("%d %d %d",&a[i].dia,&a[i].mes,&a[i].ano);
    }
    for(int i=0;i<tam;i++){
        if(i==0){
            maior=a[i].ano;
            menor=a[i].ano;
        }
        if(a[i].ano>maior)
            maior=a[i].ano;
        if(a[i].ano<menor)
            menor=a[i].ano;
    }
    for(int i=0;i<tam;i++){
        if(a[i].ano==maior){
            if(a[i].mes>maiormes){
                maiormes=a[i].mes;
            }
        }
        if(a[i].ano==menor){
            if(a[i].mes<menormes){
                menormes=a[i].mes;
            }
        }
    }
    for(int i=0;i<tam;i++){
        if(a[i].ano==maior && a[i].mes==maiormes){
            if(a[i].dia>maiordia){
                maiordia=a[i].dia;
            }
        }
        if(a[i].ano==menor && a[i].mes==menormes){
            if(a[i].dia<menordia){
                menordia=a[i].dia;
            }
        }
    }
    printf("\nO mais novo eh:\n");
    for(int i=0;i<tam;i++){
        if(a[i].ano==maior && a[i].mes==maiormes && a[i].dia==maiordia)
            printf("\nNome:%s  Data de Nascimento: %d/%d/%d\n",a[i].nome,a[i].dia,a[i].mes,a[i].ano);
    }
    printf("\nO mais velho eh:\n");
    for(int i=0;i<tam;i++){
        if(a[i].ano==menor && a[i].mes==menormes && a[i].dia==menordia)
            printf("\nNome:%s  Data de Nascimento: %d/%d/%d\n",a[i].nome,a[i].dia,a[i].mes,a[i].ano);
    }
}