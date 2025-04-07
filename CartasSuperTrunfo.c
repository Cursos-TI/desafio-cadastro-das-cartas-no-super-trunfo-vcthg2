#include <stdio.h>

int main() {
    printf("###Desafio Cartas Super Trunfo###\n");

    int populacao, PIB, pontosturisticos;
    float area, densidadedapopulacao, pibpercapta;
    char nome[30];
    
    printf("Nome da cidade: \n");
    scanf("%s", nome);

    printf("PIB: \n");
    scanf("%d", &PIB);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);
  
    printf("A área é: \n");
    scanf("%f", &area);

    printf("População: \n");
    scanf("%d", &populacao);

    densidadedapopulacao = populacao / area;
    pibpercapta = (float)PIB / populacao;

    printf("Nome da cidade: %s / Área: %.2f KM²\n", nome, area);
    printf("PIB: %d / Número de pontos turísticos: %d\n", PIB, pontosturisticos);
    printf("A Densidade da população é: %.2f / O Pib per capta é: %.2f\n", densidadedapopulacao, pibpercapta);
    

return 0;

}