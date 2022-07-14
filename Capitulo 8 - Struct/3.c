#include <stdio.h>
#include <math.h>
typedef struct ponto{
    int x,y;
}ponto;
float distpont(int x1,int y1,int x2,int y2){
    float dist=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    return dist;
}
void main(){
    ponto a,b;
    printf("\nDigite coordenadas do primeiro ponto x e y:");
    scanf("%d %d",&a.x,&a.y);
    printf("\nDigite coordenadas x e y do segundo ponto:");
    scanf("%d %d",&b.x,&b.y);
    printf("\nA distancia entre os dois pontos: %.2f \n",distpont(a.x,a.y,b.x,b.y));
}