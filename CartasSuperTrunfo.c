#include <stdio.h>


int main() {

//Declaração de variáveis.

    char estado[3];
    char codigodacidade[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int NumerodePontosTuristicos;
    float DensidadePopulacional;
    float PIBPerCapita;
    float SuperPoder;

    char estado1[3];
    char codigodacidade1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int NumerodePontosTuristicos1;
    float DensidadePopulacional1;
    float PIBPerCapita1;
    float SuperPoder1;

    //Entrada de dados.

    printf("Digite os dados da Carta 1\n");

    printf("Digite seu estado [de A a H]: ");
    scanf("%2s", estado);

    printf("Digite o codigo da carta [de 1 a 4]: ");
    scanf("%4s", codigodacidade);

    printf("Digite sua cidade: ");
    scanf("%49s", cidade);

    printf("Digite a populacao da cidade: ");
    scanf("%i", &populacao);

    printf("Digite a area da sua cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &pib);

    printf("Digite quantos pontos turisticos sua cidade tem: ");
    scanf("%i", &NumerodePontosTuristicos);

    printf("Digite os dados da Carta 2\n");

    printf("Digite seu estado [de A a H]:");
    scanf("%2s", estado1);

    printf("Digite o codigo da carta [de 1 a 4]: ");
    scanf("%4s", codigodacidade1);

    printf("Digite sua cidade: ");
    scanf("%49s", cidade1);

    printf("Digite a populacao da cidade: ");
    scanf("%i", &populacao1);

    printf("Digite a area da sua cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turisticos sua cidade tem: ");
    scanf("%i", &NumerodePontosTuristicos1);

    // Cálculos para Carta 1
    DensidadePopulacional = (float)populacao / area;
    PIBPerCapita = (pib * 1000000000) / populacao; // Converte bilhões para reais
    SuperPoder = populacao + area + pib + NumerodePontosTuristicos + PIBPerCapita + (1/DensidadePopulacional);

    // Cálculos para Carta 2
    DensidadePopulacional1 = (float)populacao1 / area1;
    PIBPerCapita1 = (pib1 * 1000000000) / populacao1;
    SuperPoder1 = populacao1 + area1 + pib1 + NumerodePontosTuristicos1 + PIBPerCapita1 + (1/DensidadePopulacional1);

    // Saída de dados.

    printf("Aqui estao os dados da Carta 1:\n");
    printf("Estado: %s\n", estado);  
    printf("Codigo da cidade: %s\n", codigodacidade);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao); 
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib); 
    printf("Numero de pontos turisticos: %d\n", NumerodePontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional);
    printf("PIB Per Capita: %.2f reais\n", PIBPerCapita);
    printf("Super Poder: %.2f\n", SuperPoder);

    printf("Aqui estao os dados da Carta 2:\n");
    printf("Estado: %s\n", estado1);  
    printf("Codigo da cidade: %s\n", codigodacidade1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);  
    printf("Area: %.2f km²\n", area1);  
    printf("PIB: %.2f bilhoes de reais\n", pib1);  
    printf("Numero de pontos turisticos: %d\n", NumerodePontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB Per Capita: %.2f reais\n", PIBPerCapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);
    
    // Comparação das cartas
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", (populacao > populacao1) ? 1 : 2, (populacao > populacao1) ? 1 : 0);
    printf("Area: Carta %d venceu (%d)\n", (area > area1) ? 1 : 2, (area > area1) ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", (pib > pib1) ? 1 : 2, (pib > pib1) ? 1 : 0);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (NumerodePontosTuristicos > NumerodePontosTuristicos1) ? 1 : 2, (NumerodePontosTuristicos > NumerodePontosTuristicos1) ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (DensidadePopulacional < DensidadePopulacional1) ? 1 : 2, (DensidadePopulacional < DensidadePopulacional1) ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (PIBPerCapita > PIBPerCapita1) ? 1 : 2, (PIBPerCapita > PIBPerCapita1) ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", (SuperPoder > SuperPoder1) ? 1 : 2, (SuperPoder > SuperPoder1) ? 1 : 0);

// 1. Comparação por POPULAÇÃO (maior valor vence)

    printf("\nComparacao por POPULACAO:\n");
    printf("Carta 1 - %s: %d habitantes\n", cidade, populacao);
    printf("Carta 2 - %s: %d habitantes\n", cidade1, populacao1);

     if (populacao > populacao1) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
    } else if (populacao1 > populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade1);
    }

    return 0;

}
