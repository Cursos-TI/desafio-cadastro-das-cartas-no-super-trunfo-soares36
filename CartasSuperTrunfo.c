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
    
// Menu interativo
    int opcao;
    do {
        printf("\nMENU DE COMPARAÇÃO - SUPER TRUNFO\n");
        printf("1. Comparar por População\n");
        printf("2. Comparar por Área\n");
        printf("3. Comparar por PIB\n");
        printf("4. Comparar por Pontos Turísticos\n");
        printf("5. Comparar por Densidade Populacional\n");
        printf("6. Comparar por PIB per Capita\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: // População
                printf("\nComparação por POPULAÇÃO:\n");
                printf("Carta 1 - %s: %d habitantes\n", cidade, populacao);
                printf("Carta 2 - %s: %d habitantes\n", cidade1, populacao1);
                
                if(populacao > populacao1) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
                } else if(populacao1 > populacao) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade1);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
                
            case 2: // Área
                printf("\nComparação por ÁREA:\n");
                printf("Carta 1 - %s: %.2f km²\n", cidade, area);
                printf("Carta 2 - %s: %.2f km²\n", cidade1, area1);
                
                if(area > area1) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
                } else if(area1 > area) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade1);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
                
            case 3: // PIB
                printf("\nComparação por PIB:\n");
                printf("Carta 1 - %s: %.2f bilhões\n", cidade, pib);
                printf("Carta 2 - %s: %.2f bilhões\n", cidade1, pib1);
                
                if(pib > pib1) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
                } else if(pib1 > pib) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade1);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
                
            case 4: // Pontos Turísticos
                printf("\nComparação por PONTOS TURÍSTICOS:\n");
                printf("Carta 1 - %s: %d pontos\n", cidade, NumerodePontosTuristicos);
                printf("Carta 2 - %s: %d pontos\n", cidade1, NumerodePontosTuristicos1);
                
                if(NumerodePontosTuristicos > NumerodePontosTuristicos1) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
                } else if(NumerodePontosTuristicos1 > NumerodePontosTuristicos) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade1);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
                
            case 5: // Densidade Populacional
                printf("\nComparação por DENSIDADE POPULACIONAL:\n");
                printf("Carta 1 - %s: %.2f hab/km²\n", cidade, DensidadePopulacional);
                printf("Carta 2 - %s: %.2f hab/km²\n", cidade1, DensidadePopulacional1);
                
                if(DensidadePopulacional < DensidadePopulacional1) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
                } else if(DensidadePopulacional1 < DensidadePopulacional) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade1);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
                
            case 6: // PIB per Capita
                printf("\nComparação por PIB PER CAPITA:\n");
                printf("Carta 1 - %s: %.2f reais\n", cidade, PIBPerCapita);
                printf("Carta 2 - %s: %.2f reais\n", cidade1, PIBPerCapita1);
                
                if(PIBPerCapita > PIBPerCapita1) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
                } else if(PIBPerCapita1 > PIBPerCapita) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade1);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
                
            case 0:
                printf("Saindo do programa...\n");
                break;
                
            default:
                printf("Opção inválida! Tente novamente.\n");
        }

    return 0;
    } while(opcao != 0);

}
