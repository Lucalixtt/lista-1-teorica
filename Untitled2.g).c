#include <stdlib.h>

int main(){

    float pressao, volume, temperatura, massa_ar;

    printf("software para calculo da massa de ar de um pneu\n\n");
    printf("informe a pressao do pneu:\n");
    scanf("%f",&pressao);

    printf("informe o volume do pneu:\n");
    scanf("%f",&volume);

    printf("informe a temperatura do pneu:\n");
    scanf("%f",&temperatura);

    massa_ar = ((pressao*volume)/(0.37*(temperatura*460)));

    printf("A massa de ar do pneu sera:%.3f", massa_ar);
return 0;
}
