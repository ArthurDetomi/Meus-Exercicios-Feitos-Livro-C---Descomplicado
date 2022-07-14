#include <stdio.h>
#include <string.h>
int contvogal(char str[],int tam){
    int cont=0;
    for(int i=0;i<tam;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'|| str[i]=='u')
            cont++;
    }
    return cont;
}
void substvgpcaracter(char str[],int tam,char c){
    int cont=0;
    for(int i=0;i<tam;i++){
        if(str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            str[i]=c;
    }
}
void main (){
    char str[50],c;
    printf("\nDigite uma palavra:");
    gets(str);
    int tam=strlen(str);
    int qtqvg=contvogal(str,tam);
    printf("\nDigite um caracter :");
    scanf("%c",&c);
    substvgpcaracter(str,tam,c);
    printf("\nQtd de vogais : %d \n Nova string : %s \n",qtqvg,str);
}