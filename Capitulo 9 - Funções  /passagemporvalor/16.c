#include <stdio.h>
void desenho(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-1;i>0;i--){
        for(int j=i;j>0;j--){
            printf("*");
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