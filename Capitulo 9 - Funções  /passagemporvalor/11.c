#include <stdio.h>
int potencia(int a,int b){
    int pot=1;
    for(int i=0;i<b;i++){
        pot*=a;
    }
    return pot;
}
void main (){
    int n1,n2;
    printf("Digite dois valores :");
    scanf("%d %d",&n1,&n2);
    printf("\n%d elevado a %d= %d\n",n1,n2,potencia(n1,n2));
}