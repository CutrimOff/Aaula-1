#include <stdio.h>
#define PI 3.14159265359

int main() {
    float raio, area;

    // Leitura do raio
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    // Cálculo da área
    area = PI * raio * raio;

    // Saída dos resultados
    printf("A area do circulo de raio %.2f eh %.2f\n", raio, area);

    return 0;
}