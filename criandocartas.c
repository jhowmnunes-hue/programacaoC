#include <stdio.h>

int main () {
    /* Carta 1*/
    char estado1[2] = "A";
    char codigo1[50] = "A01";
    char nome_da_cidade1[50] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int Numero_de_pontos_turisticos1 = 50;

    /* Carta 2*/
    char estado2[2] = "B";
    char codigo2[50] = "B02";
    char nome_da_cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int Numero_de_pontos_turisticos2 = 30;

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome_da_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", Numero_de_pontos_turisticos1);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome_da_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", Numero_de_pontos_turisticos2);
    return 0;
}