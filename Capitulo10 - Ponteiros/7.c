#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void main (){
    char string1[50],string2[50],*p1=string1,*p2=string2;
    int cont=0,contaux=0;
    bool contem=false;
    printf("\nDigite a primeira string :");
    scanf("%s",string1);
    printf("\nDigite a segunda string :");
    scanf("%s",string2);
    int tam=strlen(string1);
    int tam2=strlen(string2);

    for(int i=0;i<tam;i++){
        cont=0;
        contaux=0;
        for(int j=i;j<tam;j++){
            if(*(p1+j)==*(p2+cont))
                contaux++;
            cont++;
        }
        if(contaux==tam2){
            contem=true;
            printf("\n%d  %d",contaux,tam2);
            break;
        }
    }
    if(contem==true)
        printf("\n %s esta contido em %s\n",string2,string1);
    if(contem==false)
        printf("\n %s nao esta contido em %s\n",string2,string1);
}