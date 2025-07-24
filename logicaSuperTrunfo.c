#include <stdio.h>

int main()
{
    // Declaração das variáveis para a primeira carta
    char estado1[3];  // Estado: string (ex: "SP")
    char codigo1[4];  // Código da carta: letra + número (ex: A01)
    char cidade1[50]; // Nome da cidade
    int populacao1;   // População da cidade
    float area1;      // Área em km²
    float pib1;       // PIB em bilhões de reais
    int turisticos1;  // Número de pontos turísticos

    // Declaração das variáveis para a segunda carta
    char estado2[3];  // Estado: string (ex: "RJ")
    char codigo2[4];  // Código da carta: letra + número (ex: B02)
    char cidade2[50]; // Nome da cidade
    int populacao2;   // População da cidade
    float area2;      // Área em km²
    float pib2;       // PIB em bilhões de reais
    int turisticos2;  // Número de pontos turísticos

    // Variáveis para os cálculos
    float densidade1;      // Densidade populacional da carta 1 (hab/km²)
    float pib_per_capita1; // PIB per capita da carta 1 (reais)
    float densidade2;      // Densidade populacional da carta 2 (hab/km²)
    float pib_per_capita2; // PIB per capita da carta 2 (reais)

    // Leitura dos dados da primeira carta
    printf("=== CADASTRO DA CARTA 1 ===\n");
    printf("Digite o estado (ex: SP): ");
    scanf("%s", estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turisticos1);

    // Leitura dos dados da segunda carta
    printf("\n=== CADASTRO DA CARTA 2 ===\n");
    printf("Digite o estado (ex: RJ): ");
    scanf("%s", estado2);
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turisticos2);

    // Cálculos para ambas as cartas
    densidade1 = (float)populacao1 / area1;             // Densidade populacional (hab/km²)
    pib_per_capita1 = (pib1 * 1000000000) / populacao1; // PIB per capita (reais)
    densidade2 = (float)populacao2 / area2;             // Densidade populacional (hab/km²)
    pib_per_capita2 = (pib2 * 1000000000) / populacao2; // PIB per capita (reais)

    // Exibição dos dados cadastrados
    printf("\n=== DADOS CADASTRADOS ===\n");
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    // Comparação de cartas - ATRIBUTO ESCOLHIDO: POPULAÇÃO
    // Regra: Maior população vence
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");
    printf("Atributo escolhido: População\n\n");

    printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);

    // Lógica de comparação usando if-else
    if (populacao1 > populacao2)
    {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
        printf("A cidade %s tem %d habitantes a mais que %s.\n", cidade1, (populacao1 - populacao2), cidade2);
    }
    else if (populacao2 > populacao1)
    {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
        printf("A cidade %s tem %d habitantes a mais que %s.\n", cidade2, (populacao2 - populacao1), cidade1);
    }
    else
    {
        printf("\nResultado: Empate!\n");
        printf("As duas cidades têm a mesma população: %d habitantes.\n", populacao1);
    }

    return 0;
}