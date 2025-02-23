#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste jansen morais

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int carta1,carta2;//aqui vai armazenar o código da carta
    char codigo1[4],codigo2[4]; ////variavel que vai armazenar o codigo da carta
    char estado1[4],estado2[4];  
    char nome1[30],nome2[30]; //variavel que vai armazenar nome da carta
    float população1,população2; //variavel que vai armazenar 
    unsigned int area1,area2;//variavel que vai armazenar a area, usarei o comando usigned int para almentar o tamanho da variavel 
    unsigned int pib1,pib2;//variavel que vai armazenar o pib, usarei o comando usigned int para almentar o tamanho da variavel
    int turismo1,turismo2;//variavel que vai armazenar pontos de turismo
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("*** Jogo super trunfo***\n\n");/*parte para introdução*/

    printf("Porfavor insira o código da carta:");/*aqui usarei o "prinf" para mstrar a mensagem solicitando a informação */
    scanf("%s", &codigo1);/*aqui usarei o "scanf" para ler a string e guaradr na variavel*/

    printf("Porfavor insira o nome da cidade:");
    scanf("%s",&nome1);

    printf("Porfavor insira a quantidade populacional:");
    scanf("%f",&população1);/*aqui usarei o caomando "%f", para lear por completo a string*/

    printf("Porfavor insira o valor correspondente a area em km°²:");
    scanf("%f",&area1);

    printf("Porfavor insira a quantidade de pontos turisticos:");
    scanf("%d",&turismo1);/*aqui usarei o comando "%d", pois o valor não ultrapassara a cas decimal*/

    printf("Porfavor insira o valor do PIB:");
    scanf("%u",&pib1);/*aqui usarei o comando "%U" por conta da unsigned*/

    printf("Por favpr entre com a areá em Km°²:");
    scanf("%u",&area1);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
