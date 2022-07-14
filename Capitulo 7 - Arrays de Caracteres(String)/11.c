#include <stdio.h>
#include <string.h>
void passarparaminuscula(char str1[]){
    for(int i=0;str1[i]!='\0';i++){
        if(str1[i]>=65 && str1[i]<=90)
            str1[i]+=32;
    }
}
void main (){
    char str1[50];
    printf("\nDigite uma palavra :");
    gets(str1);
    passarparaminuscula(str1);
    printf("\nA nova palavra: %s\n",str1);
}