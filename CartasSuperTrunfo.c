#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado[2];
    char codigodacidade[40];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int NumerodePontosTuristicos;

    char estado1[2];
    char codigodacidade1[40];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int NumerodePontosTuristicos1;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite os dados da Carta 1\n");

    printf("Digite seu estado [de A a H]:\n");
    scanf("%1s", estado);

    printf("Digite o codigo da carta [de 1 a 4]: \n");
    scanf("%4s", codigodacidade);

    printf("Digite sua cidade: \n");
    scanf("%49s", cidade);

    printf("Digite a populacao da cidade: \n");
    scanf("%i", &populacao);

    printf("Digite a area da sua cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib);

    printf("Digite quantos pontos turisticos sua cidade tem: \n");
    scanf("%i", &NumerodePontosTuristicos);

    printf("Digite os dados da Carta 2\n");

    printf("Digite seu estado [de A a H]:\n");
    scanf("%1s", estado1);

    printf("Digite o codigo da carta [de 1 a 4]: \n");
    scanf("%4s", codigodacidade1);

    printf("Digite sua cidade: \n");
    scanf("%49s", cidade1);

    printf("Digite a populacao da cidade: \n");
    scanf("%i", &populacao1);

    printf("Digite a area da sua cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turisticos sua cidade tem: \n");
    scanf("%i", &NumerodePontosTuristicos1);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Aqui estão os dados da Carta 1:\n");
    printf("Estado: %s\n", estado);  
    printf("Codigo da cidade: %s\n", codigodacidade);
    printf("Cidade: %s\n", cidade);
    printf("Populaçao: %d\n", populacao); 
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib); 
    printf("Numero de pontos turisticos: %d\n", NumerodePontosTuristicos);

    printf("Aqui estão os dados da Carta 2:\n");
    printf("Estado: %s\n", estado1);  
    printf("Codigo da cidade: %s\n", codigodacidade1);
    printf("Cidade: %s\n", cidade1);
    printf("Populaçao: %d\n", populacao1);  
    printf("Area: %.2f km²\n", area1);  
    printf("PIB: %.2f bilhoes de reais\n", pib1);  
    printf("Numero de pontos turisticos: %d\n", NumerodePontosTuristicos1);
    
    return 0;
}
