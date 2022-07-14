#include <stdio.h>
int fatorial(int n){
    int fat=1;
    for(int i=n;i>0;i--){
        fat*=i;
    }
    return fat;
}
void main (){
    int n;
    printf("\nDigite um numero:");
    scanf("%d",&n);
    printf("\nO fatorial de %d: %d",n,fatorial(n));
}