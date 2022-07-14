#include <stdio.h>
int para_segundos(int h,int m,int s){
    return (h*3600)+(m*60)+s;
}
void main (){
    int horas,minutos,segundos;
    printf("\nDigite horas,minutos e segundos :");
    scanf("%d %d %d",&horas,&minutos,&segundos);
    printf("\nEssa hora em segundos equivale a: %d\n",para_segundos(horas,minutos,segundos));

}