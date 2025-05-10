#include <stdio.h>

int main(){
    //variável do menu
    int atributo;

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
    scanf(" %s", codigo1);

    printf("Escreva o nome da cidade escolhida para sua carta:\n");
    scanf(" %s", cidade1);

    printf("Escreva o valor da População da cidade escolhida:\n");
    scanf(" %li", &populacao1); 

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
    scanf(" %s", codigo2);

    printf("Escreva o nome da cidade escolhida para sua carta:\n");
    scanf(" %s", cidade2);

    printf("Escreva o valor da População da cidade escolhida:\n");
    scanf(" %li", &populacao2); 

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
    printf("População: %li\n", populacao1);
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
    printf("População: %li\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %i\n", Pturistico2);
    printf("PIB Per Capita: %.2f\n", pib_P_cap2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("Super Poder: %.2f\n", poder2);

    //Menu de seleção de qual atributo desejado para fazer a comparação
    printf("\nAgora que as cartas foram preenchidas, a brincadeira irá começar!\n Escolha qual atributo da sua carta você irá utilizar para disputar com o adversário:\n");
    printf("Os atributos possíveis são:\n");
    printf("1. Nome da Cidade\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de Pontos Turísticos\n");
    printf("6. Densidade Demográfica\n");
    printf("Escolha um dos atributos para competir:\n");
    scanf(" %i", &atributo);
    

    switch (atributo){ 
        /*
        opção 1: nome da cidade
        opção 2: população
        opção 3: área
        opção 4: PIB
        opção 5: pontos turísticos
        opção 6: dansidade demográfica
        */
    case 1:
       //apresentando informações das cartas
       printf("\nAtributo escolhido: 'Nome da Cidade'\nO nome não é um atributo comparável\n");
       printf("Carta 1 - %s\n", cidade1);
       printf("Carta 2 - %s\n", cidade2);
       break;
   case 2:
       //apresentando informações das cartas 
       printf("\nAtributo escolhido: 'População'\n");
       printf("Carta 1: %s - População - %li\n", cidade1, populacao1);
       printf("Carta 2: %s - População - %li\n", cidade2, populacao2);
           //comparando valor do atributo "população" das cartas
           if (populacao1 > populacao2){
               printf("Carta 1 ganhou!");
           } else if (populacao1 == populacao2){
               printf("EMPATE!");
           } else {
               printf("Carta 2 ganhou!");
           }
       
       break; 
   case 3:
       //apresentando informações das cartas
       printf("\nAtributo escolhido: 'Área'\n");
       printf("Carta 1: %s - Área - %.2f\n", cidade1, area1);
       printf("Carta 2: %s - Área - %.2f\n", cidade2, area2);
           //comparando valor do atributo "Área" das cartas
           if (area1 > area2){
               printf("Carta 1 ganhou!");
           } else if (area1 == area2){
               printf("EMPATE!");
           } else {
               printf("Carta 2 ganhou!");  
           }

       break;         
   case 4: 
       //apresentando informações das cartas
       printf("\nAtributo escolhido: 'PIB'\n");
       printf("Carta 1: %s - PIB - %.2f\n", cidade1, pib1);
       printf("Carta 2: %s - PIB - %.2f\n", cidade2, pib2);
           //comparando valor do atributo "população" das cartas
           if (pib1 > pib2){
               printf("Carta 1 ganhou!");
           } else if (pib1 == pib2){
               printf("EMPATE!");
           } else {
               printf("Carta 2 ganhou!"); 
           } 

       break;    
   case 5:
       //apresentando informações das cartas
       printf("\nAtributo escolhido: 'Pontos Turísticos'\n");
       printf("Carta 1: %s - Pontos Turísticos - %i\n", cidade1, Pturistico1);
       printf("Carta 2: %s - Pontos Turísticos - %i\n", cidade2, Pturistico2);
           //comparando valor do atributo "população" das cartas
           if (Pturistico1 > Pturistico2){
               printf("Carta 1 ganhou!");
           } else if (Pturistico1 == Pturistico2){
               printf("EMPATE!");
           } else {
               printf("Carta 2 ganhou!");        
           }
        break;
   case 6:
       printf("\nAtributo escolhido: 'Densidade'\n");
       printf("Carta 1: %s - População - %.2f\n", cidade1, densidade1);
       printf("Carta 2: %s - População - %.2f\n", cidade2, densidade2);
           //comparando valor do atributo "população" das cartas
           if (densidade1 < densidade2){
               printf("Carta 1 ganhou!");
           } else if (densidade1 == densidade2){
               printf("EMPATE!");
           } else {
               printf("Carta 2 ganhou!");
           }
        break;
   default:
           printf("opção inválida");

    }         

   return 0;

}