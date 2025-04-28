#include <stdio.h>
/* Dev_Tiago Santos do Carmo - todos os direitos reservados
// Atualizado em: 28/04/2025
// Email: tiagotechn@gmail.com
==============================================================================================================
// Atualização: V2.1 N aventureiro
 //Sem estruturas de repetição ou decisão (como for, if, etc).

 //Cálculo da densidade e PIB per capita com precisão.

 //Variáveis com nomes descritivos e comentários claros.
 Descrição: Este commit adiciona duas novas funcionalidades ao programa Super Trunfo de cidades:

Cálculo da densidade populacional (população / área)

Cálculo do PIB per capita ((PIB * 1.000.000.000) / população)
 
 Todos os direitos reservados - 2025 © Tiago Santos do Carmo
Uso educacional e acadêmico permitido com créditos ao autor.
 
 */
                                             
int main() {
    // Declaração das variáveis para a carta 1
    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidadePopulacional1, pibPerCapita1;

    // Declaração das variáveis para a carta 2
    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidadePopulacional2, pibPerCapita2;

    // Entrada de dados da carta 1
    printf("Digite os dados da carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]%*c", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da carta 2
    printf("\nDigite os dados da carta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]%*c", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para a carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Cálculos para a carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}

