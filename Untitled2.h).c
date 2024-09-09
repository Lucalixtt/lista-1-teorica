#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float al,r,ar;
    int n;

    printf("\tProgressão aritmetica - PA\n");
    printf("\n Entre com o valor do primeiro termo:");
    scanf("%f",&al);

    printf("\nEntre com o valor da razão:");
    scanf("%f",&r);

    printf("\nEntre com o numero de termos:");
    scanf("%d",&n);

    ar = (al + (n-1) * r);

    printf("\n\n E-nesimo termo da P.A - %f\n\n", ar);
return 0;
}
