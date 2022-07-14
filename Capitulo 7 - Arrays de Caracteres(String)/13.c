#include <stdio.h>
#include <string.h>
void main (){
    char str1[50];
    int a,b;
    printf("\nDigite uma palavra :");
    gets(str1);
    printf("\nDigite dois numeros :");
    scanf("%d %d",&a,&b);
    printf("\nNova palavra :");
    for(int i=a;i<=b;i++){
        printf("%c",str1[i]);
    }
}