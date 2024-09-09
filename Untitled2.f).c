#include <stdio.h>
#include <stdlib.h>

int main (){

    float temp_f;

    printf("seja bem vindo ao nosso programa de conversao de temperatura\n\n");

    printf("Digite a temperatura em graus farenheit:\n");
    scanf("%f",&temp_f);

    float temp_c = 0.5555*(temp_f-32);

    printf("O resultado da conversao para graus Celsius eh: %f", temp_c);
return 0;
}
