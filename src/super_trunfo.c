#include <stdio.h>

typedef struct {
    char estado[30];
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

int main() {
    Carta carta1 = {"SP", "São Paulo", 12300000, 1521.11, 699.90, 12, 0, 0};
    Carta carta2 = {"RJ", "Rio de Janeiro", 6000000, 1200.27, 412.35, 8, 0, 0};

    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    printf("Comparação: Carta 1 (%s) e Carta 2 (%s)\n", carta1.nome, carta2.nome);
    return 0;
}
