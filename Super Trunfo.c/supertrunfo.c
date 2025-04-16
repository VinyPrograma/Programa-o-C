#include <stdio.h>

int main() {

    char estado;
    char codigo [3];
    char cidade [50];
    int populacao;
    float area;
    float PIB;
    int PontosTuristicos;

    printf("digite o estado: \n");
    scanf("%s", &estado);

    printf("qual o codigo da cidade: \n");
    scanf("%3s", &codigo);

    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("digite a populacao da cidade: \n");
    scanf("%f", &populacao);

    printf("digite o pib da cidade: \n");
    scanf("%f", &PIB);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &PontosTuristicos);


    printf("estado: %s \n", estado);
    printf("codigo: %s \n", codigo);
    printf("cidade: %s \n", cidade);
    printf("populacao: %f \n", populacao);
    printf("PIB: %f \n", PIB);
    printf("PontosTuristicos: %d \n", PontosTuristicos);

    return 0;

}