#include <stdio.h>

int main(){
    //declarando variáveis carta 1
    char estado1, codigo1[3], cidade1[30];
    int Pturistico1 = 0;
    float area1 = 0, pib1 = 0, pib_P_cap1 = 0, densidade1 = 0,poder1 = 0;
    unsigned long int populacao1 = 0;

    //declarando variáveis carta 2
    char estado2, codigo2[3], cidade2[30];
    int Pturistico2 = 0;
    float area2 = 0, pib2 = 0, pib_P_cap2 = 0, densidade2 = 0, poder2 = 0; 
    unsigned long int populacao2 = 0;  

    //iniciando a entrada das variáveis da carta 1
    printf("Preenchendo os dados da primeira carta:\n");

    printf("Represente o ESTADO com uma letra de A a H:\n");
    scanf(" %c", &estado1);

    printf("Escreva o código da sua carta com um número de 01 a 04:\n");
    scanf(" %s", &codigo1);

    printf("Escreva o nome da cidade escolhida para sua carta:\n");
    scanf(" %s", &cidade1);

    printf("Escreva o valor da População da cidade escolhida:\n");
    scanf(" %i", &populacao1); 

    printf("Escreva o valor da área em Km²:\n");
    scanf(" %f", &area1);

    printf("Escreva o valor do PIB da cidade escolhida:\n");
    scanf(" %f", &pib1);

    printf("Escreva a quantidade de Pontos Turísticos da cidade escolhida:\n");
    scanf(" %i", &Pturistico1);


    //iniciando a entrada das variáveis da carta 2
    printf("\nPreenchendo os dados da segunda carta:\n");

    printf("Represente o ESTADO com uma letra de A a H:\n");
    scanf(" %c", &estado2);

    printf("Escreva o código da sua carta com um número de 01 a 04:\n");
    scanf(" %s", &codigo2);

    printf("Escreva o nome da cidade escolhida para sua carta:\n");
    scanf(" %s", &cidade2);

    printf("Escreva o valor da População da cidade escolhida:\n");
    scanf(" %i", &populacao2); 

    printf("Escreva o valor da área em Km²:\n");
    scanf(" %f", &area2);

    printf("Escreva o valor do PIB da cidade escolhida:\n");
    scanf(" %f", &pib2);

    printf("Escreva a quantidade de Pontos Turísticos da cidade escolhida:\n");
    scanf(" %i", &Pturistico2);

    //Calculando o PIB per capita
    pib_P_cap1 = pib1 / populacao1;
    pib_P_cap2 = pib2 / populacao2;

    //Calculando a Densidade Populacional
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    //Calculando o poder das cartas
    poder1 = (float) populacao1 + area1 + pib1 + Pturistico1 + pib_P_cap1 + (densidade1 * -1);

    poder2 = (float) populacao2 + area2 + pib2 + Pturistico2 + pib_P_cap2 + (densidade2 * -1);
    
    //apresentando os dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %i\n", Pturistico1);
    printf("PIB Per Capita: %.2f\n", pib_P_cap1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("Super Poder: %.2f\n", poder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %i\n", Pturistico2);
    printf("PIB Per Capita: %.2f\n", pib_P_cap2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("Super Poder: %.2f\n", poder2);

    //Comparando atributo POPULAÇÃO das cartas
    printf("\nComparando cartas... Atributo da vez ---> (População)\n");
    printf("\nCarta 1 - %s: %i\n", cidade1, populacao1);
    printf("Carta 2 - %s: %i\n", cidade2, populacao2);

    if (populacao1 > populacao2){
        printf("\nResultado: Carta 1 venceu\n");
       } else if (populacao1 == populacao2){
        printf("\nResultado: Empate\n");
       } else {
        printf("\nResultado: Carta 2 venceu\n");
       }
       
    return 0;

}