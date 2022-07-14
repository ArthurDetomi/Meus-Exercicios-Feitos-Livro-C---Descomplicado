#include <stdio.h>
void qualmes(int a){
    char v[12][20]={{"janeiro"},{"fevereiro"},{"marco"},{"abril"},{"maio"},{"junho"},{"julho"},{"agosto"},{"setembro"},{"outubro"},{"novembro"},{"dezembro"}};
    int b=a-1;
    printf("\nMes : %s\n",v[b]);

}
void main (){
    int a;
    printf("\nDigite um numero :");
    scanf("%d",&a);
    qualmes(a);
}