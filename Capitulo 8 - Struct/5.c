#include <stdio.h>
#include <math.h>
#include <stdbool.h>
struct ponto{
    int x,y;
};
struct retangulo{
    float comprimento,area,perimetro,diagonal,altura,base;
};
bool pontoexistoun(int y1,int x1,int x2,int y2){
    if(x2<=x1 && y2<=y1)
        return true;
    else
        return false;
}
void main(){
    struct ponto pe,pd,n;
    struct retangulo a;
    printf("\nDigite o ponto superior esquerdo do retangulo:");
    scanf("%d %d",&pe.x,&pe.y);
    printf("\nDigite o ponto inferior direito do retangulo:");
    scanf("%d %d",&pd.x,&pd.y);
    printf("\nDigite o ponto para verificar se ele existe ou nao dentro do retangulo:");
    scanf("%d %d",&n.x,&n.y);
    bool ver=pontoexistoun(pe.y,pd.x,n.x,n.y);
    if(ver==true)
        printf("\nO ponto existe dentro do retangulo\n");
    else   
        printf("\nO ponto nao existe dentro do retangulo\n");
}
