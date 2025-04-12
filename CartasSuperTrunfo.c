#include <stdio.h>

int main() {

    printf("###Desafio Cartas Super Trunfo###\n");

    int populacao, pontosturisticos, populacao2, pontosturisticos2;
    float area, densidadedapopulacao, pibpercapta, area2, densidadedapopulacao2, pibpercapta2, PIB, PIB2;
    char estado1[30], codigo1[30], cidade1[50];
    char estado2[30], codigo2[30], cidade2[50];

    printf("Carta 1:\n");

    printf("Estado:");
    scanf("%s", estado1);

    printf("Código:");
    scanf("%s", codigo1);

    printf("Nome da cidade:");
    scanf(" %[^\n]", cidade1);

    printf("PIB:");
    scanf("%f", &PIB);

    printf("Número de pontos turísticos:");
    scanf("%d", &pontosturisticos);
  
    printf("A área é:");
    scanf("%f", &area);

    printf("População:");
    scanf("%d", &populacao);

    densidadedapopulacao = populacao / area;
    pibpercapta = PIB / populacao;

    printf("\nCarta 2:\n");

    printf("Estado:");
    scanf("%s", estado2);

    printf("Código:");
    scanf("%s", codigo2);

    printf("Nome da cidade:");
    scanf(" %[^\n]", cidade2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Número de pontos turísticos:");
    scanf("%d", &pontosturisticos2);
  
    printf("A área é:");
    scanf("%f", &area2);

    printf("População:");
    scanf("%d", &populacao2);

    densidadedapopulacao2 = populacao2 / area2;
    pibpercapta2 = PIB2 / populacao2;

    printf("\nCARTA 1:\n");
    printf("Estado: %s  /  Código: %s\n", estado1, codigo1);
    printf("Nome da cidade: %s  /  Área: %.2f KM²\n", cidade1, area);
    printf("PIB: %.2f Bilhões de Reais  /  Pontos turísticos: %d\n", PIB, pontosturisticos);
    printf("Densidade da população: %.2f  /  PIB per capita: %.2f\n\n", densidadedapopulacao, pibpercapta);
    
    printf("CARTA 2:\n");
    printf("Estado: %s  /  Código: %s\n", estado2, codigo2);
    printf("Nome da cidade: %s  /  Área: %.2f KM²\n", cidade2, area2);
    printf("PIB: %.2f Bilhões de Reais  /  Pontos turísticos: %d\n", PIB2, pontosturisticos2);
    printf("Densidade da população: %.2f  /  PIB per capita: %.2f\n", densidadedapopulacao2, pibpercapta2);

    return 0;




}
