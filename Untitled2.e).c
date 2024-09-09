#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float altura,largura,calculo,latas;
    double arredonda_pcima, quantidade_de_latas;

    printf("\tOla, seja bem vindo (a) ao software que calcula a quantidade de tinta para pintar a parede!");
    printf("Para iniciar, por favor, informe a altura e largura da parede em metros(m)\n");
    printf("Informe a altura da parede:");

    scanf("%f",&altura);

    printf("Informe a largura da parede:");

    scanf("%f",&largura);

    calculo=(altura*largura);
    latas=calculo*300.0; //300ml por metro quadrado.
    quantidade_de_latas=latas/2000.0;

    arredonda_pcima = ceil (quantidade_de_latas);

    printf("A sua parede tem %f m^2, logo: precisa de %f lata(s) para pintar sua parede\n",calculo,arredonda_pcima);

return 0;
}
