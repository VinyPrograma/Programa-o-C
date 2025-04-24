#include <stdio.h>

int main() {

    char estado1;
    char codigo1 [3];
    char cidade1 [50];
    int populacao1;
    float area1;
    float PIB1;
    int PontosTuristicos1;
    float DensidadePopulacional1;
    float RendaPercapita1;

    

    char estado2;
    char codigo2 [3];
    char cidade2 [50];
    int populacao2;
    float area2;
    float PIB2;
    int PontosTuristicos2;
    float DensidadePopulacional2;
    float RendaPercapita2;


    printf("Carta1 \n");

    printf("digite o estado: \n");
    scanf("%s", &estado1);

    printf("qual o codigo da cidade: \n");
    scanf("%3s", &codigo1);

    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("digite a populacao da cidade: \n");
    scanf("%f", &populacao1);

    printf("digite o pib da cidade: \n");
    scanf("%f", &PIB1);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &PontosTuristicos1);

    DensidadePopulacional1 = (float)populacao1 / area1;

    RendaPercapita1 = PIB1 / populacao1;



    printf("Carta2 \n");

    printf("digite o estado: \n");
    scanf("%s", &estado2);

    printf("qual o codigo da cidade: \n");
    scanf("%3s", &codigo2);

    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("digite a populacao da cidade: \n");
    scanf("%f", &populacao2);

    printf("digite o pib da cidade: \n");
    scanf("%f", &PIB2);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &PontosTuristicos2);

    DensidadePopulacional2 = (float)populacao2 / area2;

    RendaPercapita2 = PIB2 / populacao2;


    printf("estado: %s \n", estado1);
    printf("codigo: %s \n", codigo1);
    printf("cidade: %s \n", cidade1);
    printf("populacao: %f \n", populacao1);
    printf("PIB: %f \n", PIB1);
    printf("PontosTuristicos: %d \n", PontosTuristicos1);
    printf("DensidadePopulacional: %f \n", DensidadePopulacional1);
    printf("RendaPercapita: %f \n", RendaPercapita1);


    printf("estado: %s \n", estado2);
    printf("codigo: %s \n", codigo2);
    printf("cidade: %s \n", cidade2);
    printf("populacao: %f \n", populacao2);
    printf("PIB: %f \n", PIB2);
    printf("PontosTuristicos: %d \n", PontosTuristicos2);
    printf("DensidadePopulacional: %f \n", DensidadePopulacional2);
    printf("RendaPercapita: %f \n", RendaPercapita2);

    return 0;

}