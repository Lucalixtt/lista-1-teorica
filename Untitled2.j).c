#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int notas_um, notas_dez,notas_cinquenta,notas_cem,resultado;

    printf("Bem vindo ao contador de notas!\n");
    printf("informe a qauntidade de notas de 1 real:\n");
    scanf("%d",&notas_um);

    printf("informe a qauntidade de notas de 10 reais:\n");
    scanf("%d",&notas_dez);

    printf("informe a qauntidade de notas de 50 reais:\n");
    scanf("%d",&notas_cinquenta);

    printf("informe a qauntidade de notas de 100 reais:\n");
    scanf("%d",&notas_cem);

    resultado=(1*notas_um)+(10*notas_dez)+(50*notas_cinquenta)+(100*notas_cem);

    printf("\n O valor total em dinheiro eh:%d",resultado);
return 0;
}
