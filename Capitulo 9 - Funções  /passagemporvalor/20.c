#include <stdio.h>
float funcaoe (int n){
    float soma=0;
    for(int i=0;i<=n;i++){
        float fat=1.00;
        for(int j=i;j>0;j--){
            fat*=j;
        }
        soma+=(1/fat);
    }
    return soma;
}
void main (){
    int n;
    printf("\n Digite um valor para n:");
    scanf("%d",&n);
    printf("\n O valor aproximado de e: %f",funcaoe(n));
}