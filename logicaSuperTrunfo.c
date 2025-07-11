#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    char codigoCarta1[10], codigoCarta2[10], nomeCidade1[50], nomeCidade2[50];
    char estado1, estado2;
    int numPntsTuristicos1, numPntsTuristicos2;
    float area1, area2, pib1, pib2;
    float densidadePopulacional1,densidadePopulacional2, pibPerCapita1,pibPerCapita2;
    unsigned long int populacao1, populacao2;
    float superPoder1, superPoder2;
    
    printf("Carta 01:\n"); //insere as informações da primeira carta
    printf("Informe o estado da carta: \n");
    scanf(" %c", &estado1);
    printf("Informe o código da carta: \n");
    scanf("%s", codigoCarta1);
    printf("Informe o nome da cidade: \n");
    scanf("%s", nomeCidade1);
    printf("Informe a população da cidade: \n");
    scanf("%lu", &populacao1);
    printf("Informe a área da cidade: \n");
    scanf("%f", &area1);
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &numPntsTuristicos1);
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    printf("Carta 02:\n"); //insere as informações da segunda carta
    printf("Informe o estado da carta: \n");
    scanf(" %c", &estado2);
    printf("Informe o código da carta: \n");
    scanf("%s", codigoCarta2);
    printf("Informe o nome da cidade: \n");
    scanf("%s", nomeCidade1);
    printf("Informe a população da cidade: \n");
    scanf("%lu", &populacao2);
    printf("Informe a área da cidade: \n");
    scanf("%f", &area2);
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &numPntsTuristicos2);
    densidadePopulacional2  = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;



    return 0;
}
