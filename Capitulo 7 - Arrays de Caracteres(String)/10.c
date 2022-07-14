#include <stdio.h>
#include <string.h>
void passarparamaiusculo(char str1[]){
    for(int i=0;str1[i]!='\0';i++){
        if(str1[i]>=97 && str1[i]<=122)
            str1[i]-=32;
    }
}
void main (){
    char str1[50];
    printf("\nDigite uma palavra :");
    gets(str1);
    passarparamaiusculo(str1);
    printf("\nNova palavra formada: %s",str1);
}