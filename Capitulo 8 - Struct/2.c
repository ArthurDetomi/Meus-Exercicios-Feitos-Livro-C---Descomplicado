#include <stdio.h>
#include <string.h>
#include <math.h>
typedef struct ponto{
    int x,y;
}ponto;
float distpont(int x1,int y1,int x2,int y2){
    float result=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    return result;
}
void main (){
    ponto a;
    printf("\nDigite as coordenadas do ponto:");
    scanf("%d %d",&a.x,&a.y);
    printf("\nA distancia desse ponto ate a origem eh : %.2f",distpont(0,0,a.x,a.y));
}