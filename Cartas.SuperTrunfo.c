#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Aventureiro - Cadastro com Cálculo

// Struct para representar uma carta
struct Carta {
    char codigo[4];            // Código da cidade: (ex: A01)
    char nome[50];             // Nome da cidade:
    int populacao;             // População:
    float area;                // Área em km²:
    float pib;                 // PIB em bilhões:
    int pontosTuristicos;      // Número de pontos turísticos:
    float densidade;           // Densidade populacional (calculado):
    float pibPerCapita;        // PIB per capita (calculado):
};

int main() {
    struct Carta carta1, carta2;

    // Entrada de dados da carta 1
    printf("Cadastro da Carta 1\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.nome);

    printf("Digite a população da cidade: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos para carta 1
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000) / carta1.populacao;

    // Entrada de dados da carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Digite o código da cidade (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.nome);

    printf("Digite a população da cidade: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos para carta 2
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000) / carta2.populacao;

    // Exibição dos dados da carta 1
    printf("\n--- Carta da Cidade 1 ---\n");
    printf("Código: %s\n", carta1.codigo);
    printf("Nome: %s\n", carta1.nome);
    printf("População: %d habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: R$ %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade);
    printf("PIB per Capita: R$ %.2f\n", carta1.pibPerCapita);

    // Exibição dos dados da carta 2
    printf("\n--- Carta da Cidade 2 ---\n");
    printf("Código: %s\n", carta2.codigo);
    printf("Nome: %s\n", carta2.nome);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: R$ %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade);
    printf("PIB per Capita: R$ %.2f\n", carta2.pibPerCapita);

    return 0;
}
