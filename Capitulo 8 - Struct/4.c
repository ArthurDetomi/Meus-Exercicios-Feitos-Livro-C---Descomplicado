#include <stdio.h>
#include <math.h>
struct ponto{
    int x,y;
};
struct retangulo{
    float comprimento,area,perimetro,diagonal,altura,base;
};
void main(){
    struct ponto pe,pd;
    struct retangulo a;
    printf("\nDigite o ponto superior esquerdo :");
    scanf("%d %d",&pe.x,&pe.y);
    printf("\nDigite o ponto inferior direito :");
    scanf("%d %d",&pd.x,&pd.y);
    a.altura=pe.y-pd.y;
    a.base=pd.x-pe.x;
    a.comprimento=a.base;
    a.area=a.base*a.altura;
    a.perimetro=2*a.base + 2*a.altura;
    a.diagonal=sqrt(pow(a.base,2)+pow(a.altura,2));
    printf("\nMedidas do Retangulo\nComprimento: %.2f\nArea: %.2f\nPerimetro: %.2f\nDiagonal: %.2f\n",a.comprimento,a.area,a.perimetro,a.diagonal);

}