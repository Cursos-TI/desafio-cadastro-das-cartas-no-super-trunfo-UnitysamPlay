#include <stdio.h>
//Dev_Tiago Santos do Carmo todos os direitos reservados
//31/03/2025
//email:tiagotechn@gmail.com
//==========================================================
//%d: Imprime um inteiro no formato decimal.
 
//%i: Equivalente a %d.
 
//%f: Imprime um número de ponto flutuante no formato padrão.
 
//%e: Imprime um número de ponto flutuante na notação científica.
 
//%c: Imprime um único caractere.
 
//%s: Imprime uma cadeia (string) de caracteres.

// Função principal
int main() {
    // Declaração das variáveis 1 para os dados da carta 1
    char estado1;
    char codigo1[5];  // Para armazenar o código da carta (ex: A01)
    char cidade1[50]; // Nome da cidade
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // Declaração das variáveis 2 para os dados da carta 2
    char estado2;
    char codigo2[5];  // Para armazenar o código da carta (ex: B02)
    char cidade2[50]; // Nome da cidade
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // Coleta dos dados do usuario meu mano =) para a carta 1<<< não seja mula tiago
    printf("Digite os dados da carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);  // O espaço antes de %c é necessário para limpar o>> buffer<<<< isso e importante
    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]%*c", cidade1);  // Lê a cidade, permitindo espaços
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Coleta dos dados para a carta 2
    printf("\nDigite os dados da carta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]%*c", cidade2);  // Lê a cidade, permitindo espaços
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição das informações da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // Exibição das informações da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
