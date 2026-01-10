#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

double pib_per_capita(float pib, int populacao) {
    return (pib * 1000000000.0) / populacao;
}

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
    // Área para definição das variáveis para armazenar as propriedades das cidades

    // Utilizacao do setlocale para definir o idioma para não quebrar a exibicao das informacões e utilizar .(ponto) ao inves de ,(virgula), no números de ponto flutuante
    setlocale(LC_CTYPE, "Portuguese");
    setlocale(LC_NUMERIC, "C");

    char estado, estado2;
    char codigo_da_carta[4], codigo_da_carta2[4];
    char nome_da_cidade[50], nome_da_cidade2[50];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int numero_de_pontos_turisticos, numero_de_pontos_turisticos2;

    // Área para entrada de dados

    printf("Carta 1:\n");
    printf("Insira o valor do Estado: ");
    scanf(" %c", &estado);

    printf("Insira o valor do código da carta: ");
    scanf("%3s", codigo_da_carta);

    getchar();

    printf("Insira o nome da cidade: ");
    fgets(nome_da_cidade, sizeof(nome_da_cidade), stdin);

    printf("Insira o número de habitantes: ");
    scanf("%d", &populacao);

    printf("Insira a área da cidade: ");
    scanf("%f", &area);

    printf("Insira o valor do PIB: ");
    scanf("%f", &pib);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("\n");

    printf("Carta 2:\n");
    printf("Insira o valor do Estado: ");
    scanf(" %c", &estado2);

    printf("Insira o valor do código da carta: ");
    scanf("%3s", codigo_da_carta2);

    getchar();

    printf("Insira o nome da cidade: ");
    fgets(nome_da_cidade2, sizeof(nome_da_cidade2), stdin);

    printf("Insira o número de habitantes: ");
    scanf("%d", &populacao2);

    printf("Insira a área da cidade: ");
    scanf("%f", &area2);

    printf("Insira o valor do PIB: ");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    printf("\n");

    // Área para exibição dos dados da cidade

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_da_carta);
    printf("Nome da Cidade: %s", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", populacao/(float)area);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita(pib, populacao));


    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", populacao2/(float)area2);
    printf("PIB per Capita: %.2f reais\n", ceil(pib_per_capita(pib2, populacao2)));


    return 0;
}



