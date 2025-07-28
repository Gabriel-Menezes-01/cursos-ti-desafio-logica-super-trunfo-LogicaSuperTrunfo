#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    
    // Variável para o menu de escolha
    int opcao_menu;

    // Leitura dos dados da primeira carta
    printf("=== CADASTRO DA CARTA 1 ===\n");
    printf("Digite o estado (ex: SP): ");
    scanf("%2s", estado1);  // Limitando a 2 caracteres + terminador
    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", codigo1);  // Limitando a 3 caracteres + terminador
    printf("Digite o nome da cidade: ");
    scanf("%49s", cidade1); // Limitando a 49 caracteres + terminador
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
    scanf("%2s", estado2);  // Limitando a 2 caracteres + terminador
    printf("Digite o código da carta (ex: B02): ");
    scanf("%3s", codigo2);  // Limitando a 3 caracteres + terminador
    printf("Digite o nome da cidade: ");
    scanf("%49s", cidade2); // Limitando a 49 caracteres + terminador
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

    // MENU INTERATIVO PARA ESCOLHA DO ATRIBUTO
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor valor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("Digite sua opção (1-6): ");
    scanf("%d", &opcao_menu);

    // COMPARAÇÃO USANDO SWITCH E ESTRUTURAS DE DECISÃO ANINHADAS
    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
    
    switch (opcao_menu) {
        case 1: // População
            printf("Atributo escolhido: POPULAÇÃO\n");
            printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);
            
            if (populacao1 > populacao2) {
                printf("\n🏆 RESULTADO: Carta 1 (%s) venceu!\n", cidade1);
                printf("💡 Diferença: %d habitantes a mais\n", (populacao1 - populacao2));
            } else if (populacao2 > populacao1) {
                printf("\n🏆 RESULTADO: Carta 2 (%s) venceu!\n", cidade2);
                printf("💡 Diferença: %d habitantes a mais\n", (populacao2 - populacao1));
            } else {
                printf("\n🤝 RESULTADO: Empate!\n");
                printf("💡 Ambas as cidades têm a mesma população: %d habitantes\n", populacao1);
            }
            break;

        case 2: // Área
            printf("Atributo escolhido: ÁREA\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);
            
            if (area1 > area2) {
                printf("\n🏆 RESULTADO: Carta 1 (%s) venceu!\n", cidade1);
                printf("💡 Diferença: %.2f km² a mais\n", (area1 - area2));
            } else if (area2 > area1) {
                printf("\n🏆 RESULTADO: Carta 2 (%s) venceu!\n", cidade2);
                printf("💡 Diferença: %.2f km² a mais\n", (area2 - area1));
            } else {
                printf("\n🤝 RESULTADO: Empate!\n");
                printf("💡 Ambas as cidades têm a mesma área: %.2f km²\n", area1);
            }
            break;

        case 3: // PIB
            printf("Atributo escolhido: PIB\n");
            printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", cidade2, estado2, pib2);
            
            if (pib1 > pib2) {
                printf("\n🏆 RESULTADO: Carta 1 (%s) venceu!\n", cidade1);
                printf("💡 Diferença: %.2f bilhões de reais a mais\n", (pib1 - pib2));
            } else if (pib2 > pib1) {
                printf("\n🏆 RESULTADO: Carta 2 (%s) venceu!\n", cidade2);
                printf("💡 Diferença: %.2f bilhões de reais a mais\n", (pib2 - pib1));
            } else {
                printf("\n🤝 RESULTADO: Empate!\n");
                printf("💡 Ambas as cidades têm o mesmo PIB: %.2f bilhões de reais\n", pib1);
            }
            break;

        case 4: // Pontos Turísticos
            printf("Atributo escolhido: PONTOS TURÍSTICOS\n");
            printf("Carta 1 - %s (%s): %d pontos turísticos\n", cidade1, estado1, turisticos1);
            printf("Carta 2 - %s (%s): %d pontos turísticos\n", cidade2, estado2, turisticos2);
            
            if (turisticos1 > turisticos2) {
                printf("\n🏆 RESULTADO: Carta 1 (%s) venceu!\n", cidade1);
                printf("💡 Diferença: %d pontos turísticos a mais\n", (turisticos1 - turisticos2));
            } else if (turisticos2 > turisticos1) {
                printf("\n🏆 RESULTADO: Carta 2 (%s) venceu!\n", cidade2);
                printf("💡 Diferença: %d pontos turísticos a mais\n", (turisticos2 - turisticos1));
            } else {
                printf("\n🤝 RESULTADO: Empate!\n");
                printf("💡 Ambas as cidades têm o mesmo número de pontos turísticos: %d\n", turisticos1);
            }
            break;

        case 5: // Densidade Populacional (REGRA INVERSA - menor vence)
            printf("Atributo escolhido: DENSIDADE POPULACIONAL\n");
            printf("🔄 REGRA ESPECIAL: Menor densidade vence (melhor qualidade de vida)\n");
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, densidade2);
            
            if (densidade1 < densidade2) {  // REGRA INVERSA: menor densidade vence
                printf("\n🏆 RESULTADO: Carta 1 (%s) venceu!\n", cidade1);
                printf("💡 Vantagem: %.2f hab/km² menor densidade (menos aglomerada)\n", (densidade2 - densidade1));
            } else if (densidade2 < densidade1) {
                printf("\n🏆 RESULTADO: Carta 2 (%s) venceu!\n", cidade2);
                printf("💡 Vantagem: %.2f hab/km² menor densidade (menos aglomerada)\n", (densidade1 - densidade2));
            } else {
                printf("\n🤝 RESULTADO: Empate!\n");
                printf("💡 Ambas as cidades têm a mesma densidade: %.2f hab/km²\n", densidade1);
            }
            break;

        case 6: // PIB per Capita
            printf("Atributo escolhido: PIB PER CAPITA\n");
            printf("Carta 1 - %s (%s): %.2f reais por habitante\n", cidade1, estado1, pib_per_capita1);
            printf("Carta 2 - %s (%s): %.2f reais por habitante\n", cidade2, estado2, pib_per_capita2);
            
            if (pib_per_capita1 > pib_per_capita2) {
                printf("\n🏆 RESULTADO: Carta 1 (%s) venceu!\n", cidade1);
                printf("💡 Diferença: %.2f reais a mais por habitante\n", (pib_per_capita1 - pib_per_capita2));
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf("\n🏆 RESULTADO: Carta 2 (%s) venceu!\n", cidade2);
                printf("💡 Diferença: %.2f reais a mais por habitante\n", (pib_per_capita2 - pib_per_capita1));
            } else {
                printf("\n🤝 RESULTADO: Empate!\n");
                printf("💡 Ambas as cidades têm o mesmo PIB per capita: %.2f reais\n", pib_per_capita1);
            }
            break;

        default: // Tratamento de opção inválida
            printf("❌ ERRO: Opção inválida!\n");
            printf("💡 Por favor, escolha uma opção entre 1 e 6.\n");
            printf("🔄 Execute o programa novamente e selecione uma opção válida.\n");
            break;
    }

    return 0;
}