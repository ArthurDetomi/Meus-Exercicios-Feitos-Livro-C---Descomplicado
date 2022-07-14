#include <stdio.h>
#include <math.h>
float serie(int n){
    float soma=0;
    for(int i=1;i<=n;i++){
        soma+=(pow(i,2)+1)/(i+3);
    }
    return soma;
}
void main (){
    int n;
    printf("\nDigite o valor de n:");
    scanf("%d",&n);
    printf("\nO valor da funcao com %d: %.2f:",n,serie(n));


}