#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

double pib_per_capita(float pib, int populacao) {
    return (pib * 1000000000.0) / populacao;
}

void compara_inteiros(
    const char *nome1,
    const char *nome2,
    const char *atributo,
    int valor_carta1,
    int valor_carta2
) {
    printf("\n====================================\n");
    printf("Comparação de Cartas\n");
    printf("Atributo: %s\n", atributo);
    printf("====================================\n\n");

    printf("Carta 1 - %s\n", nome1);
    printf("Valor: %d\n\n", valor_carta1);

    printf("Carta 2 - %s\n", nome2);
    printf("Valor: %d\n\n", valor_carta2);

    printf("------------------------------------\n");

    if (valor_carta1 > valor_carta2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (valor_carta2 > valor_carta1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    printf("------------------------------------\n");
}

void compara_float(
    const char *nome1,
    const char *nome2,
    const char *atributo,
    float valor_carta1,
    float valor_carta2
) {
    printf("\n====================================\n");
    printf("Comparação de Cartas\n");
    printf("Atributo: %s\n", atributo);
    printf("====================================\n\n");

    printf("Carta 1 - %s\n", nome1);
    printf("Valor: %.2f\n\n", valor_carta1);

    printf("Carta 2 - %s\n", nome2);
    printf("Valor: %.2f\n\n", valor_carta2);

    printf("------------------------------------\n");

    // Comparacao para definir o vencedor
    if (strcmp(atributo, "Densidade demográfica") == 0) {
        if (valor_carta1 < valor_carta2) { 
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    }
    } else {
        if (valor_carta1 > valor_carta2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else if (valor_carta2 > valor_carta1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    printf("------------------------------------\n");
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
    float densidade_populacional, densidade_populacional2;
    int numero_de_pontos_turisticos, numero_de_pontos_turisticos2;
    int opcao;

    // Área para entrada de dados

    printf("Carta 1:\n");
    printf("Insira o valor do Estado: ");
    scanf(" %c", &estado);

    printf("Insira o valor do código da carta: ");
    scanf("%3s", codigo_da_carta);

    getchar();

    printf("Insira o nome da cidade: ");
    fgets(nome_da_cidade, sizeof(nome_da_cidade), stdin);
    nome_da_cidade[strcspn(nome_da_cidade, "\n")] = '\0'; // código para remover o \n para imprimir corretamente o valor no final

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
    nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = '\0';// código para remover o \n para imprimir corretamente o valor no final

    printf("Insira o número de habitantes: ");
    scanf("%d", &populacao2);

    printf("Insira a área da cidade: ");
    scanf("%f", &area2);

    printf("Insira o valor do PIB: ");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &numero_de_pontos_turisticos2);

    printf("\n");

    densidade_populacional = populacao/(float)area;

    // Área para exibição dos dados da cidade

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_da_carta);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita(pib, populacao));


    densidade_populacional2 = populacao2/(float)area2;

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita(pib2, populacao2)); // Utilizacao do ceil para chegar mais próximo do resultado utilizado no exemplo

    printf("\n");

    //Foi comentado para não poluir o promt para o usuário
    /*printf("Comparação de cartas (Atributo: Densidade Populacional):\n\n");

    printf("Carta 1 - %s (%c): %.2f\n", nome_da_cidade, estado, densidade_populacional);
    printf("Carta 2 - %s (%c): %.2f\n", nome_da_cidade2, estado2, densidade_populacional2);

    printf("\n");

    if (densidade_populacional < densidade_populacional2) { // Comparacao para definir o vencedor
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_da_cidade);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_da_cidade2);
    }
    */

    //Menu para o usuário escolher a opcao
    printf("Atributos para comparacao das cartas\n");
    printf("1 - Nome das cidades\n");
    printf("2 - Populacao\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Número de pontos turísticos\n");
    printf("6 - Densidade demográfica\n");
    printf("Escolha o atributo de comparacao: ");
    scanf("%d", &opcao);

    //Switch para escolher qual atributo será comparado
    switch(opcao) {
        case 1:
            printf("Nome da Cidade: %s\n", nome_da_cidade);
            printf("Nome da Cidade: %s\n", nome_da_cidade2);
            break;
        case 2:
            compara_inteiros(nome_da_cidade, nome_da_cidade2, "População", populacao, populacao2);
            break;
        case 3:
            compara_float(nome_da_cidade, nome_da_cidade2, "Área", area, area2);
            break;
        case 4:
            compara_float(nome_da_cidade, nome_da_cidade2, "PIB", pib, pib2);
            break;
        case 5:
            compara_inteiros(nome_da_cidade, nome_da_cidade2, "Número de pontos turísticos", numero_de_pontos_turisticos, numero_de_pontos_turisticos2);
            break;
        case 6:
            compara_float(nome_da_cidade, nome_da_cidade2, "Densidade demográfica", densidade_populacional, densidade_populacional2);
            break;
        default:
            printf("Opcao inválida\n");

    }

    return 0;
}



