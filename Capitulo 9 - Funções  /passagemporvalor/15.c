#include <stdio.h>
void desenho(int n){
    printf("\nDesenho:\n");
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("!");
        }
        printf("\n");
    }
}
void main (){
    int n;
    printf("\nDigite o valor de n:");
    scanf("%d",&n);
    desenho(n);
}