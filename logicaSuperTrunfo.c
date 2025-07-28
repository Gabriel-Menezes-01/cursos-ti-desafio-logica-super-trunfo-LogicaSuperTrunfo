#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
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
    int opcao_menu, primeiro_atributo, segundo_atributo;
    
    // Variáveis para armazenar os valores dos atributos escolhidos
    float valor1_attr1, valor1_attr2, valor2_attr1, valor2_attr2;
    float soma_carta1, soma_carta2;
    char nome_attr1[30], nome_attr2[30];

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

    // MENU INTERATIVO DINÂMICO PARA ESCOLHA DE DOIS ATRIBUTOS
    printf("\n=== SUPER TRUNFO - COMPARAÇÃO AVANÇADA ===\n");
    printf("🎯 Você irá escolher DOIS atributos para comparar as cartas!\n\n");
    
    // PRIMEIRO MENU - Escolha do primeiro atributo
    printf("=== ESCOLHA DO PRIMEIRO ATRIBUTO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor valor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("Digite sua opção (1-6): ");
    scanf("%d", &primeiro_atributo);
    
    // Validação do primeiro atributo
    if (primeiro_atributo < 1 || primeiro_atributo > 6) {
        printf("❌ ERRO: Opção inválida! Execute o programa novamente.\n");
        return 1;
    }
    
    // SEGUNDO MENU - Dinâmico (exclui a opção já escolhida)
    printf("\n=== ESCOLHA DO SEGUNDO ATRIBUTO ===\n");
    printf("⚠️  Escolha um atributo DIFERENTE do primeiro!\n");
    
    // Menu dinâmico - mostra apenas opções disponíveis
    if (primeiro_atributo != 1) printf("1 - População\n");
    if (primeiro_atributo != 2) printf("2 - Área\n");
    if (primeiro_atributo != 3) printf("3 - PIB\n");
    if (primeiro_atributo != 4) printf("4 - Pontos Turísticos\n");
    if (primeiro_atributo != 5) printf("5 - Densidade Populacional (menor valor vence)\n");
    if (primeiro_atributo != 6) printf("6 - PIB per Capita\n");
    printf("Digite sua opção: ");
    scanf("%d", &segundo_atributo);
    
    // Validação do segundo atributo
    if (segundo_atributo < 1 || segundo_atributo > 6 || segundo_atributo == primeiro_atributo) {
        printf("❌ ERRO: Opção inválida ou igual ao primeiro atributo!\n");
        printf("💡 Execute o programa novamente e escolha atributos diferentes.\n");
        return 1;
    }

    // FUNÇÃO PARA OBTER VALORES E NOMES DOS ATRIBUTOS
    // Esta função usa operador ternário para elegância do código
    
    // Obter valores e nomes do primeiro atributo
    valor1_attr1 = (primeiro_atributo == 1) ? (float)populacao1 :
                   (primeiro_atributo == 2) ? area1 :
                   (primeiro_atributo == 3) ? pib1 :
                   (primeiro_atributo == 4) ? (float)turisticos1 :
                   (primeiro_atributo == 5) ? densidade1 : pib_per_capita1;
                   
    valor2_attr1 = (primeiro_atributo == 1) ? (float)populacao2 :
                   (primeiro_atributo == 2) ? area2 :
                   (primeiro_atributo == 3) ? pib2 :
                   (primeiro_atributo == 4) ? (float)turisticos2 :
                   (primeiro_atributo == 5) ? densidade2 : pib_per_capita2;
    
    // Obter valores e nomes do segundo atributo
    valor1_attr2 = (segundo_atributo == 1) ? (float)populacao1 :
                   (segundo_atributo == 2) ? area1 :
                   (segundo_atributo == 3) ? pib1 :
                   (segundo_atributo == 4) ? (float)turisticos1 :
                   (segundo_atributo == 5) ? densidade1 : pib_per_capita1;
                   
    valor2_attr2 = (segundo_atributo == 1) ? (float)populacao2 :
                   (segundo_atributo == 2) ? area2 :
                   (segundo_atributo == 3) ? pib2 :
                   (segundo_atributo == 4) ? (float)turisticos2 :
                   (segundo_atributo == 5) ? densidade2 : pib_per_capita2;
    
    // Definir nomes dos atributos usando switch
    switch (primeiro_atributo) {
        case 1: sprintf(nome_attr1, "População"); break;
        case 2: sprintf(nome_attr1, "Área"); break;
        case 3: sprintf(nome_attr1, "PIB"); break;
        case 4: sprintf(nome_attr1, "Pontos Turísticos"); break;
        case 5: sprintf(nome_attr1, "Densidade Populacional"); break;
        case 6: sprintf(nome_attr1, "PIB per Capita"); break;
    }
    
    switch (segundo_atributo) {
        case 1: sprintf(nome_attr2, "População"); break;
        case 2: sprintf(nome_attr2, "Área"); break;
        case 3: sprintf(nome_attr2, "PIB"); break;
        case 4: sprintf(nome_attr2, "Pontos Turísticos"); break;
        case 5: sprintf(nome_attr2, "Densidade Populacional"); break;
        case 6: sprintf(nome_attr2, "PIB per Capita"); break;
    }

    // COMPARAÇÃO INDIVIDUAL DOS ATRIBUTOS
    printf("\n=== COMPARAÇÃO DETALHADA ===\n");
    
    // Comparação do primeiro atributo
    printf("\n🥇 PRIMEIRO ATRIBUTO: %s\n", nome_attr1);
    printf("Carta 1 - %s: %.2f\n", cidade1, valor1_attr1);
    printf("Carta 2 - %s: %.2f\n", cidade2, valor2_attr1);
    
    // Lógica de comparação do primeiro atributo (densidade tem regra inversa)
    int carta1_vence_attr1;
    if (primeiro_atributo == 5) { // Densidade - menor vence
        carta1_vence_attr1 = (valor1_attr1 < valor2_attr1) ? 1 : 
                            (valor1_attr1 > valor2_attr1) ? 0 : -1; // -1 = empate
    } else { // Outros atributos - maior vence
        carta1_vence_attr1 = (valor1_attr1 > valor2_attr1) ? 1 : 
                            (valor1_attr1 < valor2_attr1) ? 0 : -1; // -1 = empate
    }
    
    // Exibir resultado do primeiro atributo
    if (carta1_vence_attr1 == 1) {
        printf("🏆 Vencedor: Carta 1 (%s)\n", cidade1);
    } else if (carta1_vence_attr1 == 0) {
        printf("🏆 Vencedor: Carta 2 (%s)\n", cidade2);
    } else {
        printf("🤝 Empate no primeiro atributo!\n");
    }
    
    // Comparação do segundo atributo
    printf("\n🥈 SEGUNDO ATRIBUTO: %s\n", nome_attr2);
    printf("Carta 1 - %s: %.2f\n", cidade1, valor1_attr2);
    printf("Carta 2 - %s: %.2f\n", cidade2, valor2_attr2);
    
    // Lógica de comparação do segundo atributo
    int carta1_vence_attr2;
    if (segundo_atributo == 5) { // Densidade - menor vence
        carta1_vence_attr2 = (valor1_attr2 < valor2_attr2) ? 1 : 
                            (valor1_attr2 > valor2_attr2) ? 0 : -1;
    } else { // Outros atributos - maior vence
        carta1_vence_attr2 = (valor1_attr2 > valor2_attr2) ? 1 : 
                            (valor1_attr2 < valor2_attr2) ? 0 : -1;
    }
    
    // Exibir resultado do segundo atributo
    if (carta1_vence_attr2 == 1) {
        printf("🏆 Vencedor: Carta 1 (%s)\n", cidade1);
    } else if (carta1_vence_attr2 == 0) {
        printf("🏆 Vencedor: Carta 2 (%s)\n", cidade2);
    } else {
        printf("🤝 Empate no segundo atributo!\n");
    }

    // CÁLCULO DA SOMA DOS ATRIBUTOS
    soma_carta1 = valor1_attr1 + valor1_attr2;
    soma_carta2 = valor2_attr1 + valor2_attr2;
    
    printf("\n=== RESULTADO FINAL - SOMA DOS ATRIBUTOS ===\n");
    printf("📊 Carta 1 (%s): %.2f + %.2f = %.2f\n", cidade1, valor1_attr1, valor1_attr2, soma_carta1);
    printf("📊 Carta 2 (%s): %.2f + %.2f = %.2f\n", cidade2, valor2_attr1, valor2_attr2, soma_carta2);
    
    // RESULTADO FINAL COM OPERADOR TERNÁRIO
    printf("\n🎯 VENCEDOR FINAL: ");
    (soma_carta1 > soma_carta2) ? printf("🏆 Carta 1 (%s) venceu!\n💡 Diferença: %.2f pontos\n", cidade1, (soma_carta1 - soma_carta2)) :
    (soma_carta2 > soma_carta1) ? printf("🏆 Carta 2 (%s) venceu!\n💡 Diferença: %.2f pontos\n", cidade2, (soma_carta2 - soma_carta1)) :
    printf("🤝 EMPATE TOTAL!\n💡 Ambas as cartas têm a mesma soma: %.2f pontos\n", soma_carta1);
    
    // RESUMO DA PARTIDA
    printf("\n=== RESUMO DA PARTIDA ===\n");
    printf("🎮 Atributos comparados: %s e %s\n", nome_attr1, nome_attr2);
    printf("⚡ Placar por atributo:\n");
    printf("   - %s: %s\n", nome_attr1, 
           (carta1_vence_attr1 == 1) ? "Carta 1" : 
           (carta1_vence_attr1 == 0) ? "Carta 2" : "Empate");
    printf("   - %s: %s\n", nome_attr2,
           (carta1_vence_attr2 == 1) ? "Carta 1" : 
           (carta1_vence_attr2 == 0) ? "Carta 2" : "Empate");
    printf("🏁 Resultado final: %s\n", 
           (soma_carta1 > soma_carta2) ? "Carta 1 venceu" :
           (soma_carta2 > soma_carta1) ? "Carta 2 venceu" : "Empate");

    return 0;
}