#include <stdio.h>

int main() {
    float Custo1, frete, despesas, VD, lucro;

    // Leitura dos dados de entrada
    printf("Digite o Custo1 da mercadoria: ");
    scanf("%f", &Custo1);
    printf("Digite o valor do frete: ");
    scanf("%f", &frete);
    printf("Digite o valor das despesas eventuais: ");
    scanf("%f", &despesas);
    printf("Digite o valor de VD: ");
    scanf("%f", &VD);

    // Cálculo do lucro em percentual
    lucro = ((VD - (Custo1 + frete + despesas)) / (Custo1 + frete + despesas)) * 100;

    // Saída dos resultados
    printf("O lucro da mercadoria é de %.2f%%\n", lucro);

    return 0;
}