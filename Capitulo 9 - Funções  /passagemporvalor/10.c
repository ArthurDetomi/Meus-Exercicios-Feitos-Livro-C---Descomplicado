#include <stdio.h>
float calculadorabasica(int a,int b,char s){
    float z;
    if(s=='+')
        z=a+b;
    if(s=='-')
        z=a-b;
    if(s=='*')
        z=a*b;
    if(s=='/')
        z=a/b;
    return z;
}

void main (){
    float n1,n2;
    char s;
    printf("\nDigite dois valores :");
    scanf("%f %f",&n1,&n2);
    retorne:
    printf("\nDigite a operacao que se deseja:\n(/)divisao,(+)adicao,(*)multiplicacap,(-)subtracao:\n");
    scanf(" %c",&s);
    if(s=='-' || s=='+' || s=='/' || s=='*'){
    }else{
        printf("\nOperador digitado invalido, digite novamente\n");
        goto retorne;
    }
    printf("\nO valor de %.2f %c %.2f= %.2f\n",n1,s,n2,calculadorabasica(n1,n2,s));
    
}