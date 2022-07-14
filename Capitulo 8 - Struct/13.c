#include <stdio.h>
enum meses{
    janeiro=0,fevereiro,marco,abril,maio,junho,julho,agosto,setembro,outubro,novembro,dezembro
};
char matriz[][20]={
    "janeiro","fevereiro","marco","abril","maio","junho","julho","agosto","setembro","outubro","novembro","dezembro"
};
void main (){
    enum meses m;
    int n;
    printf("\nDigite um numero de um  mes :");
    scanf("%d",&n);
    m=n-1;
    printf("\nMes: %s\nNumero de dias : %d",matriz[m],30);
}