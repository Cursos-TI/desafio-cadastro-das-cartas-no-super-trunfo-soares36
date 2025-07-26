#include <stdio.h>


int main() {

    char estado[3];
    char codigodacidade[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int NumerodePontosTuristicos;
    float DensidadePopulacional;
    float PIBPerCapita;

    char estado1[3];
    char codigodacidade1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int NumerodePontosTuristicos1;
    float DensidadePopulacional1;
    float PIBPerCapita1;


    printf("Digite os dados da Carta 1\n");

    printf("Digite seu estado [de A a H]:\n");
    scanf("%2s", estado);

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
    scanf("%2s", estado1);

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


    printf("Aqui estao os dados da Carta 1:\n");
    printf("Estado: %s\n", estado);  
    printf("Codigo da cidade: %s\n", codigodacidade);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao); 
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib); 
    printf("Numero de pontos turisticos: %d\n", NumerodePontosTuristicos);
    DensidadePopulacional = (float)populacao / area;
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional);
    PIBPerCapita = (float)(pib * 1000000000)/ populacao;
    printf("PIB Per Capita: %.2f reais\n", PIBPerCapita);

    printf("Aqui estao os dados da Carta 2:\n");
    printf("Estado: %s\n", estado1);  
    printf("Codigo da cidade: %s\n", codigodacidade1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);  
    printf("Area: %.2f km²\n", area1);  
    printf("PIB: %.2f bilhoes de reais\n", pib1);  
    printf("Numero de pontos turisticos: %d\n", NumerodePontosTuristicos1);
    DensidadePopulacional1 = (float)populacao1 / area1;
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
    PIBPerCapita1 = (float)(pib1 * 1000000000) / populacao1;
    printf("PIB Per Capita: %.2f reais\n", PIBPerCapita1); 


    return 0;

}
