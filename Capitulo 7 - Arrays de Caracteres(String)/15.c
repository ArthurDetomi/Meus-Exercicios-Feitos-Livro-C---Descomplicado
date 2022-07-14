#include <stdio.h>
#include <string.h>
    
void main (){
    char str1[50],str2[50],aux[26];
    int antes;
    printf("\nDigite uma palavra :");
    scanf(" %s",str1);
    printf("\nDigite uma palavra :");
    scanf(" %s",str2);
    for(int i=0;i<26;i++){
        aux[i]='a'+i;
    }
    for(int i=0;str1[i]!='\0';i++){
        for(int j=0;j<=26;j++){
            if(str1[i]==aux[j] && str2[i]!=aux[j]){
                antes=1;
                break;
            }if(str2[i]==aux[j] && str1[i]!=aux[j]){
                antes=2;
                break;
            }
        }
    }
        if(antes==1)
            printf("\nAs duas em ordem alfabetica:%s,%s",str1,str2);
        if(antes==2)
            printf("\nAs duas em ordem alfabetica:%s,%s",str2,str1);
}