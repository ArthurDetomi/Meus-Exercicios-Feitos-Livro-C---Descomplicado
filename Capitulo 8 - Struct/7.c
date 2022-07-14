#include <stdio.h>
struct hora{
    int hora,minutos,segundos;
};
void main (){
    struct hora a[5];
    float min[5],maior;
    int pos;
    for(int i=0;i<5;i++){
        printf("\nDigite a hora,minuto e segundos:");
        scanf("%d %d %d",&a[i].hora,&a[i].minutos,&a[i].segundos);
    }
    for(int i=0;i<5;i++){
        min[i]=( a[i].hora*60) + (a[i].segundos/60) + a[i].minutos;
    }
    maior=min[0];
    for(int i=0;i<5;i++){
        if(min[i]>maior){
            maior=min[i];
            pos=i;
        }
    }
    printf("\nA maior hora: %d horas : %d minutos : %d segundos",a[pos].hora,a[pos].minutos,a[pos].segundos);
    printf("\n");
}