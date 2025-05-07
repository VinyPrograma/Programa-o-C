#include <stdio.h>

int main() {
    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int turisticos1, turisticos2;
    float densidade_pop1, densidade_pop2;
    float pib_per_capita1, pib_per_capita2;
    float inverso_densidade_pop1, inverso_densidade_pop2;
    float super_poder1, super_poder2;
    int atributoComparacao;

    // Lendo os dados da carta 1
    printf("Carta1\n");
    printf("Digite seu estado: ");
    scanf("%s", estado1); 
    printf("Digite o código:\n ");
    scanf("%s", codigo1); 
    printf("Digite sua cidade: \n");
    scanf("%s", cidade1); 
    printf("Digite a população:\n");
    scanf("%d", &populacao1);
    printf("Digite sua Área: \n");
    scanf("%f", &area1);
    printf("Digite seu PIB: \n");
    scanf("%f", &pib1);
    printf("Digite os pontos turisticos: \n");
    scanf("%d", &turisticos1);

    // Lendo os dados da carta 2
    printf("\nCarta2\n");
    printf("Digite seu estado: ");
    scanf("%s", estado2);  
    printf("Digite o código:\n ");
    scanf("%s", codigo2); 
    printf("Digite sua cidade: \n");
    scanf("%s", cidade2); 
    printf("Digite a população:\n");
    scanf("%d", &populacao2);
    printf("Digite sua Área: \n");
    scanf("%f", &area2);
    printf("Digite seu PIB: \n");
    scanf("%f", &pib2);
    printf("Digite os pontos turisticos: \n");
    scanf("%d", &turisticos2);

    //Cálculos
    densidade_pop1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    inverso_densidade_pop1 = (densidade_pop1 > 0) ? (1 / densidade_pop1) : 0;
    super_poder1 = populacao1 + area1 + pib1 + (float)turisticos1 +
                    pib_per_capita1 + inverso_densidade_pop1;
    //Cálculos 2
    densidade_pop2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    inverso_densidade_pop2 = (densidade_pop2 > 0) ? (1 / densidade_pop2) : 0;
    super_poder2 = populacao2 + area2 + pib2 + (float)turisticos2 +
                    pib_per_capita2 + inverso_densidade_pop2;

    printf("\nInformações da Carta 1:\n");
    printf("Super Poder: %.3f pontos\n", super_poder1);

    printf("\nInformações da Carta 2:\n");
    printf("Super Poder: %.3f pontos\n", super_poder2);

    printf("Escolha um atributo para comparar:\n");

    printf("7. Super Poder\n");

    scanf("%d", &atributoComparacao);

    switch (atributoComparacao) {

    case 7:
        printf("Super Poder\n");
        if (super_poder1 > super_poder2)
        printf("A carta 1 tem o maior super poder!\n");
          else if (super_poder2 > super_poder1)
           printf("A carta 2 tem o maior super poder!\n");
           else{
            printf("As duas cartas tem o mesmo super poder!\n");
           }
}
    
}