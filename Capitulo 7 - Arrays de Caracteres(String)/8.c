#include <stdio.h>
#include <string.h>
void contidaoun(char str1[],char str2[], int tam,int tam2){    
    int cont2=0; 
    for(int i=0;i<tam;i++){
        int cont=0;
        for(int j=i;j<tam;j++){
            printf("\n%d - j",j);
            if(str1[j]==str2[cont])
                cont2++;
            if(cont2==tam2)
                break;
            cont++;
        }
    }
        if(cont2==tam2)
            printf("\na segunda string esta contida na primeira");
        else
            printf("\nNao esta contido\n");
}
void main (){
    char str1[50],str2[50];
    printf("\nDigite uma palavra:");
    gets(str1);
    printf("\nDigite uma palavra:");
    gets(str2);
    printf("%s",str2);
    int tam=strlen(str1);
    int tam2=strlen(str2);
    contidaoun(str1,str2,tam,tam2);
    
    
}