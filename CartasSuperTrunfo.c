#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste jansen morais

int main() {
    // Declaração das variáveis para armazenar os dados das cartas
    int carta1, carta2; // Variáveis para armazenar os códigos das cartas (não usadas no código atual)
    char codigo1[10], codigo2[10]; // Códigos das cartas (strings, com tamanho aumentado para evitar buffer overflow)
    char nome1[30], nome2[30]; // Nomes das cidades (strings)
    float populacao1, populacao2; // Populações das cidades (números de ponto flutuante)
    unsigned int area1, area2; // Áreas das cidades (inteiros não assinados)
    unsigned int pib1, pib2; // PIBs das cidades (inteiros não assinados)
    int turismo1, turismo2; // Número de pontos turísticos das cidades (inteiros)
    float densidade1, densidade2;//variavel que armazena a densidade populasional
    float renda1, renda2;// variavel que armazena o resultado da renda percapida

    // Cabeçalho do jogo
    printf("*** Jogo super trunfo***\n\n");

    // Coleta de dados da primeira carta
    printf("Por favor, insira o código da carta 1: ");
    scanf("%9s", codigo1); // Lê o código da carta (limitando a 9 caracteres para evitar buffer overflow)

    printf("Por favor, insira o nome da cidade 1: ");
    scanf(" %29[^\n]", nome1); // Lê o nome da cidade (lê a linha inteira, incluindo espaços)
    getchar();// limpa o bufer do teclado

    printf("Por favor, insira a quantidade populacional 1: ");
    scanf("%f", &populacao1); // Lê a população da cidade

    printf("Por favor, insira o valor correspondente a area em km°² 1: ");
    scanf("%u", &area1); // Lê a área da cidade (corrigido para %u)

    printf("Por favor, insira a quantidade de pontos turisticos 1: ");
    scanf("%d", &turismo1); // Lê o número de pontos turísticos da cidade

    printf("Por favor, insira o valor do PIB 1: ");
    scanf("%u", &pib1); // Lê o PIB da cidade

    printf("\n"); // Adiciona uma linha em branco para separar as cartas
    printf("Entre com as informações da segunda carta\n");
    getchar();// limpa o bufer do teclado

    // Coleta de dados da segunda carta
    printf("Por favor, insira o código da carta 2: ");
    scanf("%9s", codigo2); // Lê o código da carta (limitando a 9 caracteres)

    printf("Por favor, insira o nome da cidade 2: ");
    scanf(" %29[^\n]", nome2); // Lê o nome da cidade (lê a linha inteira)
    getchar();//limpa o bufer do teclado

    printf("Por favor, insira a quantidade populacional 2: ");
    scanf("%f", &populacao2); // Lê a população da cidade

    printf("Por favor, insira o valor correspondente a area em km°² 2: ");
    scanf("%u", &area2); // Lê a área da cidade (corrigido para %u)

    printf("Por favor, insira a quantidade de pontos turisticos 2: ");
    scanf("%d", &turismo2); // Lê o número de pontos turísticos da cidade

    printf("Por favor, insira o valor do PIB 2: ");
    scanf("%u", &pib2); // Lê o PIB da cidade

    // Exibição dos dados das cartas
    printf("\n*** Dados da Carta 1 ***\n");
    printf("Código: %s\n", codigo1); // Exibe o código da carta
    printf("Nome: %s\n", nome1); // Exibe o nome da cidade
    printf("População: %.2f\n", populacao1); // Exibe a população da cidade
    printf("Área: %u km²\n", area1); // Exibe a área da cidade
    printf("Pontos Turísticos: %d\n", turismo1); // Exibe o número de pontos turísticos da cidade
    printf("PIB: %u\n", pib1); // Exibe o PIB da cidade
    densidade1 = (float)populacao1/area1;// linha que fara o cauculo da densidade populacional
    printf("Densidade populacional: %f, had/km²\n", densidade1);// Exibe a densidade populacional da cidade
    renda1 = (float)pib1 / populacao1;// linha que fara o cauculo do PIB per capta
    printf("PIB per capita: %.4f, de rais\n", renda1);// exibe o PIB oer capita

    printf("\n*** Segunda carta***\n");
    getchar();// limpa o bufer do teclado

    printf("\n*** Dados da Carta 2 ***\n");
    printf("Código: %s\n", codigo2); // Exibe o código da carta
    printf("Nome: %s\n", nome2); // Exibe o nome da cidade
    printf("População: %.2f\n", populacao2); // Exibe a população da carta
    printf("Área: %u km²\n", area2); // Exibe a área da carta
    printf("Pontos Turísticos: %d\n", turismo2); // Exibe os pontos turisticos da carta
    printf("PIB: %u\n", pib2); // Exibe o PIB da carta
    densidade2 = (float)populacao2/area2;// linha que fara o cauculo da densidade populacional
    printf("Densidade populacional: %f, had/km²\n", densidade2);// Exibe a densidade populacional da cidade
    renda1 = (float)pib1 / populacao1;// linha que fara o cauculo do PIB per capta
    printf("PIB per capita: %.4f, de rais\n", renda1);// exibe o PIB oer capita

    return 0; // Indica que o programa terminou com sucesso
}
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    

