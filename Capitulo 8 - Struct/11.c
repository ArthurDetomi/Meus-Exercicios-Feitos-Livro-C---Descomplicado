#include <stdio.h>
typedef struct data{
    int dia,mes,ano;
}data_valida;
void main (){
    int const tam=2;
    int cont=0;
    data_valida a[2];
    for(int i=0;i<2;i++){
        printf("\nDATA %d\n",i+1);
        printf("\nDigite um dia:");
        scanf("%d",&a[i].dia);
        printf("\nDigite um mes:");
        scanf("%d",&a[i].mes);
        printf("\nDigite um ano:");
        scanf("%d",&a[i].ano);

    }
        int  d1=a[0].dia,m1=a[0].mes,a1=a[0].ano;
        while(1){
            int aux=a[0].dia;
            for(int i=aux;i<30;i++){
                if(a[0].mes==a[1].mes && a[0].dia==a[1].dia && a[0].ano==a[1].ano){
                    break;
                }
                a[0].dia+=1;
                cont++;
            }
            if(a[0].mes==a[1].mes && a[1].dia==a[1].dia && a[1].ano==a[0].ano){
                break;
            }
            if(a[0].dia==30){
                a[0].dia=1;
                cont++;
                a[0].mes+=1;
                if(a[0].mes==13){
                    a[0].mes=1;
                    a[0].ano+=1;
                }
            }
        }
        printf("\nO numero de dias:\n%d/%d/%d para %d/%d/%d = %d dias \n",d1,m1,a1,a[1].dia,a[1].mes,a[1].ano,cont);
}