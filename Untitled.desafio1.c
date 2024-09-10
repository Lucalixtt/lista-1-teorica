#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float preco_acao1 = 24.13, preco_acao2 = 11.00, preco_acao3 = 38.65;
    float dividendo_acao1 = 17.00, dividendo_acao2 = 35.00, dividendo_acao3 = 25.00;

    float valor_total = 1000.00; //investimento

    int quantidade_acao1, quantidade_acao2, quantidade_acao3;

    quantidade_acao1 = (int)(valor_total / preco_acao1);
    quantidade_acao2 = (int)(valor_total / preco_acao2);
    quantidade_acao3 = (int)(valor_total / preco_acao3);

    float valor_investido_acao1 = quantidade_acao1 * preco_acao1;
    float valor_investido_acao2 = quantidade_acao2 * preco_acao2;
    float valor_investido_acao3 = quantidade_acao3 * preco_acao3;

    float dy_acao1 = (dividendo_acao1 / preco_acao1) * 100;
    float dy_acao2 = (dividendo_acao2 / preco_acao2) * 100;
    float dy_acao3 = (dividendo_acao3 / preco_acao3) * 100;

    printf("Ação 1:\n");
    printf("  Preço: R$ %.2f\n", preco_acao1);
    printf("  Dividendos por unidade: R$ %.2f\n", dividendo_acao1);
    printf("  Quantidade comprada: %d\n", quantidade_acao1);
    printf("  Valor investido: R$ %.2f\n", valor_investido_acao1);
    printf("  Dividend Yield (DY): %.2f%%\n\n", dy_acao1);

    printf("Ação 2:\n");
    printf("  Preço: R$ %.2f\n", preco_acao2);
    printf("  Dividendos por unidade: R$ %.2f\n", dividendo_acao2);
    printf("  Quantidade comprada: %d\n", quantidade_acao2);
    printf("  Valor investido: R$ %.2f\n", valor_investido_acao2);
    printf("  Dividend Yield (DY): %.2f%%\n\n", dy_acao2);

    printf("Ação 3:\n");
    printf("  Preço: R$ %.2f\n", preco_acao3);
    printf("  Dividendos por unidade: R$ %.2f\n", dividendo_acao3);
    printf("  Quantidade comprada: %d\n", quantidade_acao3);
    printf("  Valor investido: R$ %.2f\n", valor_investido_acao3);
    printf("  Dividend Yield (DY): %.2f%%\n", dy_acao3);

    return 0;
}
