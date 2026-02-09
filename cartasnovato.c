#include <stdio.h>

int main() {

// Função para entrada de dados da carta


// Cadastro cartas - Estado
char estado1[3] = "A", estado2[3] = "B", estado3[3] = "C", estado4[3] = "D",
     estado5[3] = "E", estado6[3] = "F", estado7[3] = "G", estado8[3] = "H";

// Cidade 1 - Estado 1
char codigo1_1[5] = "A01", nome_da_cidade1_1[50];
int populacao1_1, pontos_turisticos1_1;
float area1_1, pib1_1;

// Cidade 2 - Estado 1
char codigo1_2[5] = "A02", nome_da_cidade1_2[50];
int populacao1_2, pontos_turisticos1_2;
float area1_2, pib1_2;

// Cidade 3 - Estado 1
char codigo1_3[5] = "A03", nome_da_cidade1_3[50];
int populacao1_3, pontos_turisticos1_3;
float area1_3, pib1_3;

// Cidade 4 - Estado 1
char codigo1_4[5] = "A04", nome_da_cidade1_4[50];
int populacao1_4, pontos_turisticos1_4;
float area1_4, pib1_4;

// Cidade 1 - Estado 2
char codigo2_1[5] = "B01", nome_da_cidade2_1[50];
int populacao2_1, pontos_turisticos2_1;
float area2_1, pib2_1;

// Cidade 2 - Estado 2
char codigo2_2[5] = "B02", nome_da_cidade2_2[50];
int populacao2_2, pontos_turisticos2_2;
float area2_2, pib2_2;

// Cidade 3 - Estado 2
char codigo2_3[5] = "B03", nome_da_cidade2_3[50];
int populacao2_3, pontos_turisticos2_3;
float area2_3, pib2_3;

// Cidade 4 - Estado 2
char codigo2_4[5] = "B04", nome_da_cidade2_4[50];
int populacao2_4, pontos_turisticos2_4;
float area2_4, pib2_4;

// Cidade 1 - Estado 3
char codigo3_1[5] = "C01", nome_da_cidade3_1[50];
int populacao3_1, pontos_turisticos3_1;
float area3_1, pib3_1;

// Cidade 2 - Estado 3
char codigo3_2[5] = "C02", nome_da_cidade3_2[50];
int populacao3_2, pontos_turisticos3_2;
float area3_2, pib3_2;

// Cidade 3 - Estado 3
char codigo3_3[5] = "C03", nome_da_cidade3_3[50];
int populacao3_3, pontos_turisticos3_3;
float area3_3, pib3_3;

// Cidade 4 - Estado 3
char codigo3_4[5] = "C04", nome_da_cidade3_4[50];
int populacao3_4, pontos_turisticos3_4;
float area3_4, pib3_4;

// Cidade 1 - Estado 4
char codigo4_1[5] = "D01", nome_da_cidade4_1[50];
int populacao4_1, pontos_turisticos4_1;
float area4_1, pib4_1;

// Cidade 2 - Estado 4
char codigo4_2[5] = "D02", nome_da_cidade4_2[50];
int populacao4_2, pontos_turisticos4_2;
float area4_2, pib4_2;

// Cidade 3 - Estado 4
char codigo4_3[5] = "D03", nome_da_cidade4_3[50];
int populacao4_3, pontos_turisticos4_3;
float area4_3, pib4_3;

// Cidade 4 - Estado 4
char codigo4_4[5] = "D04", nome_da_cidade4_4[50];
int populacao4_4, pontos_turisticos4_4;
float area4_4, pib4_4;

// Cidade 1 - Estado 5
char codigo5_1[5] = "E01", nome_da_cidade5_1[50];
int populacao5_1, pontos_turisticos5_1;
float area5_1, pib5_1;

// Cidade 2 - Estado 5
char codigo5_2[5] = "E02", nome_da_cidade5_2[50];
int populacao5_2, pontos_turisticos5_2;
float area5_2, pib5_2;

// Cidade 3 - Estado 5
char codigo5_3[5] = "E03", nome_da_cidade5_3[50];
int populacao5_3, pontos_turisticos5_3;
float area5_3, pib5_3;

// Cidade 4 - Estado 5
char codigo5_4[5] = "E04", nome_da_cidade5_4[50];
int populacao5_4, pontos_turisticos5_4;
float area5_4, pib5_4;

// Cidade 1 - Estado 6
char codigo6_1[5] = "F01", nome_da_cidade6_1[50];
int populacao6_1, pontos_turisticos6_1;
float area6_1, pib6_1;

// Cidade 2 - Estado 6
char codigo6_2[5] = "F02", nome_da_cidade6_2[50];
int populacao6_2, pontos_turisticos6_2;
float area6_2, pib6_2;

// Cidade 3 - Estado 6
char codigo6_3[5] = "F03", nome_da_cidade6_3[50];
int populacao6_3, pontos_turisticos6_3;
float area6_3, pib6_3;

// Cidade 4 - Estado 6
char codigo6_4[5] = "F04", nome_da_cidade6_4[50];
int populacao6_4, pontos_turisticos6_4;
float area6_4, pib6_4;

// Cidade 1 - Estado 7
char codigo7_1[5] = "G01", nome_da_cidade7_1[50];
int populacao7_1, pontos_turisticos7_1;
float area7_1, pib7_1;

// Cidade 2 - Estado 7
char codigo7_2[5] = "G02", nome_da_cidade7_2[50];
int populacao7_2, pontos_turisticos7_2;
float area7_2, pib7_2;

// Cidade 3 - Estado 7
char codigo7_3[5] = "G03", nome_da_cidade7_3[50];
int populacao7_3, pontos_turisticos7_3;
float area7_3, pib7_3;

// Cidade 4 - Estado 7
char codigo7_4[5] = "G04", nome_da_cidade7_4[50];
int populacao7_4, pontos_turisticos7_4;
float area7_4, pib7_4;

// Cidade 1 - Estado 8
char codigo8_1[5] = "H01", nome_da_cidade8_1[50];
int populacao8_1, pontos_turisticos8_1;
float area8_1, pib8_1;

// Cidade 2 - Estado 8
char codigo8_2[5] = "H02", nome_da_cidade8_2[50];
int populacao8_2, pontos_turisticos8_2;
float area8_2, pib8_2;

// Cidade 3 - Estado 8
char codigo8_3[5] = "H03", nome_da_cidade8_3[50];
int populacao8_3, pontos_turisticos8_3;
float area8_3, pib8_3;

// Cidade 4 - Estado 8
char codigo8_4[5] = "H04", nome_da_cidade8_4[50];
int populacao8_4, pontos_turisticos8_4;
float area8_4, pib8_4;

// area para entrada de dados

//Carta 1 // Estado 1 //

printf("Cadastro da Carta 1 - Estado %s\n", estado1);

// Cidade 1 - Estado 1
printf("\n--- Cidade 1 ---\n");
printf("Codigo da cidade: %s\n", codigo1_1);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade1_1);

printf("Populacao: ");
scanf("%d", &populacao1_1);
getchar(); // limpa o Enter do buffer (usado sempre depois do %d e $f para evitar problemas de leitura de strings)

printf("Area (km2): ");
scanf("%f", &area1_1);
getchar(); // limpa o Enter do buffer (usado sempre depois do %d e $f para evitar problemas de leitura de strings)

printf("PIB (em bilhoes): ");
scanf("%f", &pib1_1);
getchar(); // limpa o Enter do buffer (usado sempre depois do %d e $f para evitar problemas de leitura de strings)

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos1_1);
getchar(); // limpa o Enter do buffer (usado sempre depois do %d e $f para evitar problemas de leitura de strings)

// Cidade 2 - Estado 1
printf("\n--- Cidade 2 ---\n");
printf("Codigo da cidade: %s\n", codigo1_2);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade1_2);

printf("Populacao: ");
scanf("%d", &populacao1_2);
getchar(); // limpa o Enter do buffer (usado sempre depois do %d e $f para evitar problemas de leitura de strings)

printf("Area (km2): ");
scanf("%f", &area1_2);
getchar(); // limpa o Enter do buffer (usado sempre depois do %d e $f para evitar problemas de leitura de strings)
printf("PIB (em bilhoes): ");
scanf("%f", &pib1_2);
getchar(); // limpa o Enter do buffer (usado sempre depois do %d e $f para evitar problemas de leitura de strings)

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos1_2);
getchar(); // limpa o Enter do buffer (usado sempre depois do %d e $f para evitar problemas de leitura de strings)

// Cidade 3 - Estado 1
printf("\n--- Cidade 3 ---\n");
printf("Codigo da cidade: %s\n", codigo1_3);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade1_3);

printf("Populacao: ");
scanf("%d", &populacao1_3);
getchar(); // limpa o Enter do buffer (usado sempre depois do %d e $f para evitar problemas de leitura de strings)


printf("Area (km2): ");
scanf("%f", &area1_3);
getchar(); // limpa o Enter do buffer (usado sempre depois do %d e $f para evitar problemas de leitura de strings)


printf("PIB (em bilhoes): ");
scanf("%f", &pib1_3);
getchar();

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos1_3);
getchar(); // limpa o Enter do buffer (usado sempre depois do %d e $f para evitar problemas de leitura de strings)


// Cidade 4 - Estado 1
printf("\n--- Cidade 4 ---\n");
printf("Codigo da cidade: %s\n", codigo1_4);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade1_4);

printf("Populacao: ");
scanf("%d", &populacao1_4);
getchar(); // limpa o Enter do buffer (usado sempre depois do %d e $f para evitar problemas de leitura de strings)


printf("Area (km2): ");
scanf("%f", &area1_4);
getchar(); // limpa o Enter do buffer (usado sempre depois do %d e $f para evitar problemas de leitura de strings)


printf("PIB (em bilhoes): ");
scanf("%f", &pib1_4);
getchar(); 

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos1_4);
getchar(); 

// Carta 2 - Estado 2 //

printf("Cadastro da Carta 2 - Estado %s\n", estado2);

// Cidade 1 - Estado 2

printf("Codigo da cidade: %s\n", codigo2_1);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade2_1);

printf("Populacao: ");
scanf("%d", &populacao2_1);
getchar(); 

printf("Area (km2): ");
scanf("%f", &area2_1);
getchar(); 

printf("PIB (em bilhoes): ");
scanf("%f", &pib2_1);
getchar(); 

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos2_1);
getchar(); 

// Cidade 2 - Estado 2
printf("\n--- Cidade 2 ---\n");
printf("Codigo da cidade: %s\n", codigo2_2);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade2_2);

printf("Populacao: ");
scanf("%d", &populacao2_2);
getchar(); 

printf("Area (km2): ");
scanf("%f", &area2_2);
getchar(); 

printf("PIB (em bilhoes): ");
scanf("%f", &pib2_2);
getchar(); 

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos2_2);
getchar(); 

// Cidade 3 - Estado 2
printf("\n--- Cidade 3 ---\n");
printf("Codigo da cidade: %s\n", codigo2_3);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade2_3);

printf("Populacao: ");
scanf("%d", &populacao2_3);
getchar(); 

printf("Area (km2): ");
scanf("%f", &area2_3);
getchar(); 

printf("PIB (em bilhoes): ");
scanf("%f", &pib2_3);
getchar(); 

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos2_3);
getchar(); 

// Cidade 4 - Estado 2
printf("\n--- Cidade 4 ---\n");
printf("Codigo da cidade: %s\n", codigo2_4);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade2_4);

printf("Populacao: ");
scanf("%d", &populacao2_4);
getchar(); 

 printf("Area (km2): ");
 scanf("%f", &area2_4);
 getchar(); 

 printf("PIB (em bilhoes): ");
 scanf("%f", &pib2_4);
 getchar(); 

 printf("Numero de pontos turisticos: ");
 scanf("%d", &pontos_turisticos2_4);
 getchar(); 

// carta 3 - Estado 3 //

printf("Cadastro da Carta 3 - Estado %s\n", estado3);

// Cidade 1 - Estado 3
printf("\n--- Cidade 1 ---\n");
printf("Codigo da cidade: %s\n", codigo3_1);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade3_1);

printf("Populacao: ");
scanf("%d", &populacao3_1);
getchar(); 

printf("Area (km2): ");
scanf("%f", &area3_1);
getchar(); 

printf("PIB (em bilhoes): ");
scanf("%f", &pib3_1);
getchar(); 

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos3_1);
getchar(); 

// Cidade 2 - Estado 3
printf("\n--- Cidade 2 ---\n");
printf("Codigo da cidade: %s\n", codigo3_2);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade3_2);

printf("Populacao: ");
scanf("%d", &populacao3_2);
getchar(); 

printf("Area (km2): ");
scanf("%f", &area3_2);
getchar(); 

printf("PIB (em bilhoes): ");
scanf("%f", &pib3_2);
getchar(); 

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos3_2);
getchar(); 

// Cidade 3 - Estado 3
printf("\n--- Cidade 3 ---\n");
printf("Codigo da cidade: %s\n", codigo3_3);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade3_3);

printf("Populacao: ");
scanf("%d", &populacao3_3);
getchar(); 

printf("Area (km2): ");
scanf("%f", &area3_3);
getchar(); 

printf("PIB (em bilhoes): ");
scanf("%f", &pib3_3);
getchar(); 

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos3_3);
getchar(); 

// Cidade 4 - Estado 3
printf("\n--- Cidade 4 ---\n");
printf("Codigo da cidade: %s\n", codigo3_4);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade3_4);

 printf("Populacao: ");
 scanf("%d", &populacao3_4);
 getchar(); 
 printf("Area (km2): ");
 scanf("%f", &area3_4);
 getchar(); 
 printf("PIB (em bilhoes): ");
 scanf("%f", &pib3_4);
 getchar(); 
 printf("Numero de pontos turisticos: ");
 scanf("%d", &pontos_turisticos3_4);
 getchar(); 

// carta 4 - Estado 4 //

printf("Cadastro da Carta 4 - Estado %s\n", estado4);

// Cidade 1 - Estado 4
printf("\n--- Cidade 1 ---\n");
printf("Codigo da cidade: %s\n", codigo4_1);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade4_1);

printf("Populacao: ");
scanf("%d", &populacao4_1);
getchar(); 

printf("Area (km2): ");
scanf("%f", &area4_1);
getchar(); 

printf("PIB (em bilhoes): ");
scanf("%f", &pib4_1);

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos4_1);

// Cidade 2 - Estado 4
printf("\n--- Cidade 2 ---\n");
printf("Codigo da cidade: %s\n", codigo4_2);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade4_2);

printf("Populacao: ");
scanf("%d", &populacao4_2);
getchar(); 

printf("Area (km2): ");
scanf("%f", &area4_2);
getchar(); 

printf("PIB (em bilhoes): ");
scanf("%f", &pib4_2);
getchar(); 

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos4_2);
getchar(); 

// Cidade 3 - Estado 4
printf("\n--- Cidade 3 ---\n");
printf("Codigo da cidade: %s\n", codigo4_3);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade4_3);

printf("Populacao: ");
scanf("%d", &populacao4_3);
getchar(); 

printf("Area (km2): ");
scanf("%f", &area4_3);
getchar(); 

printf("PIB (em bilhoes): ");
scanf("%f", &pib4_3);
getchar(); 

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos4_3);
getchar(); 

// Cidade 4 - Estado 4
printf("\n--- Cidade 4 ---\n");
printf("Codigo da cidade: %s\n", codigo4_4);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade4_4);

 printf("Populacao: ");
 scanf("%d", &populacao4_4);
 printf("Area (km2): ");
 scanf("%f", &area4_4);
 getchar(); 
 printf("PIB (em bilhoes): ");
 scanf("%f", &pib4_4);
 getchar(); 
 printf("Numero de pontos turisticos: ");
 scanf("%d", &pontos_turisticos4_4);
 getchar(); 

 // carta 5 - Estado 5 //

 printf("Cadastro da Carta 5 - Estado %s\n", estado5);

 // Cidade 1 - Estado 5
printf("\n--- Cidade 1 ---\n");
printf("Codigo da cidade: %s\n", codigo5_1);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade5_1);

printf("Populacao: ");
scanf("%d", &populacao5_1);
getchar(); 

printf("Area (km2): ");
scanf("%f", &area5_1);
getchar(); 

printf("PIB (em bilhoes): ");
scanf("%f", &pib5_1);
getchar(); 

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos5_1);
getchar(); 

// Cidade 2 - Estado 5
printf("\n--- Cidade 2 ---\n");
printf("Codigo da cidade: %s\n", codigo5_2);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade5_2);

printf("Populacao: ");
scanf("%d", &populacao5_2);
getchar(); 

printf("Area (km2): ");
scanf("%f", &area5_2);
getchar(); 

printf("PIB (em bilhoes): ");
scanf("%f", &pib5_2);
getchar(); 

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos5_2);
getchar(); 

// Cidade 3 - Estado 5
printf("\n--- Cidade 3 ---\n");
printf("Codigo da cidade: %s\n", codigo5_3);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade5_3);

printf("Populacao: ");
scanf("%d", &populacao5_3);
getchar(); 

printf("Area (km2): ");
scanf("%f", &area5_3);
getchar(); 

printf("PIB (em bilhoes): ");
scanf("%f", &pib5_3);
getchar(); 

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos5_3);
getchar(); 

// Cidade 4 - Estado 5
printf("\n--- Cidade 4 ---\n");
printf("Codigo da cidade: %s\n", codigo5_4);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade5_4);

 printf("Populacao: ");
 scanf("%d", &populacao5_4);
 getchar(); 
 printf("Area (km2): ");
 scanf("%f", &area5_4);
 getchar(); 
 printf("PIB (em bilhoes): ");
 scanf("%f", &pib5_4);
 getchar(); 
 printf("Numero de pontos turisticos: ");
 scanf("%d", &pontos_turisticos5_4);
 getchar(); 

 // carta 6 - Estado 6 //

 printf("Cadastro da Carta 6 - Estado %s\n", estado6);

 // Cidade 1 - Estado 6
printf("\n--- Cidade 1 ---\n");
printf("Codigo da cidade: %s\n", codigo6_1);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade6_1);

printf("Populacao: ");
scanf("%d", &populacao6_1);
getchar(); 

printf("Area (km2): ");
scanf("%f", &area6_1);
getchar(); 

printf("PIB (em bilhoes): ");
scanf("%f", &pib6_1);
getchar(); 

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos6_1);
getchar(); 

// Cidade 2 - Estado 6
printf("\n--- Cidade 2 ---\n");
printf("Codigo da cidade: %s\n", codigo6_2);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade6_2);

printf("Populacao: ");
scanf("%d", &populacao6_2);
getchar(); 

printf("Area (km2): ");
scanf("%f", &area6_2);
getchar(); 

printf("PIB (em bilhoes): ");
scanf("%f", &pib6_2);
getchar(); 

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos6_2);
getchar(); 

// Cidade 3 - Estado 6
printf("\n--- Cidade 3 ---\n");
printf("Codigo da cidade: %s\n", codigo6_3);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade6_3);

printf("Populacao: ");
scanf("%d", &populacao6_3);
getchar(); 

printf("Area (km2): ");
scanf("%f", &area6_3);
getchar(); 

printf("PIB (em bilhoes): ");
scanf("%f", &pib6_3);
getchar(); 

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos6_3);
getchar(); 

// Cidade 4 - Estado 6
printf("\n--- Cidade 4 ---\n");
printf("Codigo da cidade: %s\n", codigo6_4);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade6_4);

 printf("Populacao: ");
 scanf("%d", &populacao6_4);
 getchar(); 
 printf("Area (km2): ");
 scanf("%f", &area6_4);
 getchar(); 
 printf("PIB (em bilhoes): ");
 scanf("%f", &pib6_4);
 getchar(); 
 printf("Numero de pontos turisticos: ");
 scanf("%d", &pontos_turisticos6_4);
 getchar(); 

 // carta 7 - Estado 7 //

 printf("Cadastro da Carta 7 - Estado %s\n", estado7);

 // Cidade 1 - Estado 7
printf("\n--- Cidade 1 ---\n");
printf("Codigo da cidade: %s\n", codigo7_1);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade7_1);

printf("Populacao: ");
scanf("%d", &populacao7_1);
getchar(); 

printf("Area (km2): ");
scanf("%f", &area7_1);
getchar(); 

printf("PIB (em bilhoes): ");
scanf("%f", &pib7_1);
getchar(); 

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos7_1);
getchar(); 

// Cidade 2 - Estado 7
printf("\n--- Cidade 2 ---\n");
printf("Codigo da cidade: %s\n", codigo7_2);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade7_2);

printf("Populacao: ");
scanf("%d", &populacao7_2);
getchar(); 

printf("Area (km2): ");
scanf("%f", &area7_2);
getchar(); 

printf("PIB (em bilhoes): ");
scanf("%f", &pib7_2);
getchar(); 

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos7_2);
getchar(); 

// Cidade 3 - Estado 7
printf("\n--- Cidade 3 ---\n");
printf("Codigo da cidade: %s\n", codigo7_3);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade7_3);

printf("Populacao: ");
scanf("%d", &populacao7_3);
getchar(); 

printf("Area (km2): ");
scanf("%f", &area7_3);
getchar(); 

printf("PIB (em bilhoes): ");
scanf("%f", &pib7_3);
getchar(); 

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos7_3);
getchar(); 

// Cidade 4 - Estado 7
printf("\n--- Cidade 4 ---\n");
printf("Codigo da cidade: %s\n", codigo7_4);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade7_4);

 printf("Populacao: ");
 scanf("%d", &populacao7_4);
 getchar(); 
 printf("Area (km2): ");
 scanf("%f", &area7_4);
 getchar(); 
 printf("PIB (em bilhoes): ");
 scanf("%f", &pib7_4);
 getchar(); 
 printf("Numero de pontos turisticos: ");
 scanf("%d", &pontos_turisticos7_4);
 getchar(); 

 // carta 8 - Estado 8 //

printf("Cadastro da Carta 8 - Estado %s\n", estado8);

// Cidade 1 - Estado 8
printf("\n--- Cidade 1 ---\n");
printf("Codigo da cidade: %s\n", codigo8_1);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade8_1);

printf("Populacao: ");
scanf("%d", &populacao8_1);
getchar(); 

printf("Area (km2): ");
scanf("%f", &area8_1);
getchar(); 

printf("PIB (em bilhoes): ");
scanf("%f", &pib8_1);
getchar(); 

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos8_1);
getchar(); 

// Cidade 2 - Estado 8
printf("\n--- Cidade 2 ---\n");
printf("Codigo da cidade: %s\n", codigo8_2);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade8_2);

printf("Populacao: ");
scanf("%d", &populacao8_2);
getchar(); 

printf("Area (km2): ");
scanf("%f", &area8_2);
getchar(); 

printf("PIB (em bilhoes): ");
scanf("%f", &pib8_2);
getchar(); 

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos8_2);
getchar(); 

// Cidade 3 - Estado 8
printf("\n--- Cidade 3 ---\n");
printf("Codigo da cidade: %s\n", codigo8_3);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade8_3);

printf("Populacao: ");
scanf("%d", &populacao8_3);
getchar(); 

printf("Area (km2): ");
scanf("%f", &area8_3);
getchar(); 

printf("PIB (em bilhoes): ");
scanf("%f", &pib8_3);
getchar(); 

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos_turisticos8_3);
getchar(); 

// Cidade 4 - Estado 8
printf("\n--- Cidade 4 ---\n");
printf("Codigo da cidade: %s\n", codigo8_4);
printf("Nome da cidade: ");
scanf("%s", nome_da_cidade8_4);

 printf("Populacao: ");
 scanf("%d", &populacao8_4);
 getchar(); 

 printf("Area (km2): ");
 scanf("%f", &area8_4);
 getchar(); 

 printf("PIB (em bilhoes): ");
 scanf("%f", &pib8_4);
 getchar(); 

 printf("Numero de pontos turisticos: ");
 scanf("%d", &pontos_turisticos8_4);
 getchar(); 

/* area para saida de dados
area para exibição de dados das cidades */

//Carta 1 - Estado 1 //

printf ("\n --- Exibição da Cidade 1 - Estado A ---\n");
printf("Codigo da cidade: %s\n", codigo1_1);
printf("Nome da cidade: %s\n", nome_da_cidade1_1);
printf("Populacao: %d\n", populacao1_1);
printf("Area (km2): %.2f\n", area1_1);
printf("PIB (em bilhoes): %.2f\n", pib1_1);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos1_1);

printf ("\n --- Exibição da Cidade 2 - Estado A ---\n");
printf("Codigo da cidade: %s\n", codigo1_2);
printf("Nome da cidade: %s\n", nome_da_cidade1_2);
printf("Populacao: %d\n", populacao1_2);
printf("Area (km2): %.2f\n", area1_2);
printf("PIB (em bilhoes): %.2f\n", pib1_2);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos1_2);

printf ("\n --- Exibição da Cidade 3 - Estado A ---\n");
printf("Codigo da cidade: %s\n", codigo1_3);
printf("Nome da cidade: %s\n", nome_da_cidade1_3);
printf("Populacao: %d\n", populacao1_3);
printf("Area (km2): %.2f\n", area1_3);
printf("PIB (em bilhoes): %.2f\n", pib1_3);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos1_3);

printf ("\n --- Exibição da Cidade 4 - Estado A ---\n");
printf("Codigo da cidade: %s\n", codigo1_4);
printf("Nome da cidade: %s\n", nome_da_cidade1_4);
printf("Populacao: %d\n", populacao1_4);
printf("Area (km2): %.2f\n", area1_4);
printf("PIB (em bilhoes): %.2f\n", pib1_4);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos1_4);

//carta 2 - Estado 2 //

printf ("\n --- Exibição da Cidade 1 - Estado B ---\n");
printf("Codigo da cidade: %s\n", codigo2_1);
printf("Nome da cidade: %s\n", nome_da_cidade2_1);
printf("Populacao: %d\n", populacao2_1);
printf("Area (km2): %.2f\n", area2_1);
printf("PIB (em bilhoes): %.2f\n", pib2_1);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos2_1);

printf ("\n --- Exibição da Cidade 2 - Estado B ---\n");
printf("Codigo da cidade: %s\n", codigo2_2);
printf("Nome da cidade: %s\n", nome_da_cidade2_2);
printf("Populacao: %d\n", populacao2_2);
printf("Area (km2): %.2f\n", area2_2);
printf("PIB (em bilhoes): %.2f\n", pib2_2);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos2_2);

printf ("\n --- Exibição da Cidade 3 - Estado B ---\n");
printf("Codigo da cidade: %s\n", codigo2_3);
printf("Nome da cidade: %s\n", nome_da_cidade2_3);
printf("Populacao: %d\n", populacao2_3);
printf("Area (km2): %.2f\n", area2_3);
printf("PIB (em bilhoes): %.2f\n", pib2_3);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos2_3);

printf ("\n --- Exibição da Cidade 4 - Estado B ---\n");
printf("Codigo da cidade: %s\n", codigo2_4);
printf("Nome da cidade: %s\n", nome_da_cidade2_4);
printf("Populacao: %d\n", populacao2_4);
printf("Area (km2): %.2f\n", area2_4);
printf("PIB (em bilhoes): %.2f\n", pib2_4);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos2_4);

// carta 3 - Estado 3 //

printf ("\n --- Exibição da Cidade 1 - Estado C ---\n");
printf("Codigo da cidade: %s\n", codigo3_1);
printf("Nome da cidade: %s\n", nome_da_cidade3_1);
printf("Populacao: %d\n", populacao3_1);
printf("Area (km2): %.2f\n", area3_1);
printf("PIB (em bilhoes): %.2f\n", pib3_1);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos3_1);

printf ("\n --- Exibição da Cidade 2 - Estado C ---\n");
printf("Codigo da cidade: %s\n", codigo3_2);
printf("Nome da cidade: %s\n", nome_da_cidade3_2);
printf("Populacao: %d\n", populacao3_2);
printf("Area (km2): %.2f\n", area3_2);
printf("PIB (em bilhoes): %.2f\n", pib3_2);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos3_2);

printf ("\n --- Exibição da Cidade 3 - Estado C ---\n");
printf("Codigo da cidade: %s\n", codigo3_3);
printf("Nome da cidade: %s\n", nome_da_cidade3_3);
printf("Populacao: %d\n", populacao3_3);
printf("Area (km2): %.2f\n", area3_3);
printf("PIB (em bilhoes): %.2f\n", pib3_3);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos3_3);

printf ("\n --- Exibição da Cidade 4 - Estado C ---\n");
printf("Codigo da cidade: %s\n", codigo3_4);
printf("Nome da cidade: %s\n", nome_da_cidade3_4);
printf("Populacao: %d\n", populacao3_4);
printf("Area (km2): %.2f\n", area3_4);
printf("PIB (em bilhoes): %.2f\n", pib3_4);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos3_4);

// carta 4 - Estado 4 //

printf ("\n --- Exibição da Cidade 1 - Estado D ---\n");
printf("Codigo da cidade: %s\n", codigo4_1);
printf("Nome da cidade: %s\n", nome_da_cidade4_1);
printf("Populacao: %d\n", populacao4_1);
printf("Area (km2): %.2f\n", area4_1);
printf("PIB (em bilhoes): %.2f\n", pib4_1);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos4_1);

printf ("\n --- Exibição da Cidade 2 - Estado D ---\n");
printf("Codigo da cidade: %s\n", codigo4_2);
printf("Nome da cidade: %s\n", nome_da_cidade4_2);
printf("Populacao: %d\n", populacao4_2);
printf("Area (km2): %.2f\n", area4_2);
printf("PIB (em bilhoes): %.2f\n", pib4_2);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos4_2);

printf ("\n --- Exibição da Cidade 3 - Estado D ---\n");
printf("Codigo da cidade: %s\n", codigo4_3);
printf("Nome da cidade: %s\n", nome_da_cidade4_3);
printf("Populacao: %d\n", populacao4_3);
printf("Area (km2): %.2f\n", area4_3);
printf("PIB (em bilhoes): %.2f\n", pib4_3);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos4_3);

printf ("\n --- Exibição da Cidade 4 - Estado D ---\n");
printf("Codigo da cidade: %s\n", codigo4_4);
printf("Nome da cidade: %s\n", nome_da_cidade4_4);
printf("Populacao: %d\n", populacao4_4);
printf("Area (km2): %.2f\n", area4_4);
printf("PIB (em bilhoes): %.2f\n", pib4_4);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos4_4);

// carta 5 - Estado 5 //

printf ("\n --- Exibição da Cidade 1 - Estado E ---\n");
printf("Codigo da cidade: %s\n", codigo5_1);
printf("Nome da cidade: %s\n", nome_da_cidade5_1);
printf("Populacao: %d\n", populacao5_1);
printf("Area (km2): %.2f\n", area5_1);
printf("PIB (em bilhoes): %.2f\n", pib5_1);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos5_1);

printf ("\n --- Exibição da Cidade 2 - Estado E ---\n");
printf("Codigo da cidade: %s\n", codigo5_2);
printf("Nome da cidade: %s\n", nome_da_cidade5_2);
printf("Populacao: %d\n", populacao5_2);
printf("Area (km2): %.2f\n", area5_2);
printf("PIB (em bilhoes): %.2f\n", pib5_2);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos5_2);

printf ("\n --- Exibição da Cidade 3 - Estado E ---\n");
printf("Codigo da cidade: %s\n", codigo5_3);
printf("Nome da cidade: %s\n", nome_da_cidade5_3);
printf("Populacao: %d\n", populacao5_3);
printf("Area (km2): %.2f\n", area5_3);
printf("PIB (em bilhoes): %.2f\n", pib5_3);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos5_3);

printf ("\n --- Exibição da Cidade 4 - Estado E ---\n");
printf("Codigo da cidade: %s\n", codigo5_4);
printf("Nome da cidade: %s\n", nome_da_cidade5_4);
printf("Populacao: %d\n", populacao5_4);
printf("Area (km2): %.2f\n", area5_4);
printf("PIB (em bilhoes): %.2f\n", pib5_4);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos5_4);

// carta 6 - Estado 6 //

printf ("\n --- Exibição da Cidade 1 - Estado F ---\n");
printf("Codigo da cidade: %s\n", codigo6_1);
printf("Nome da cidade: %s\n", nome_da_cidade6_1);
printf("Populacao: %d\n", populacao6_1);
printf("Area (km2): %.2f\n", area6_1);
printf("PIB (em bilhoes): %.2f\n", pib6_1);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos6_1);

printf ("\n --- Exibição da Cidade 2 - Estado F ---\n");
printf("Codigo da cidade: %s\n", codigo6_2);
printf("Nome da cidade: %s\n", nome_da_cidade6_2);
printf("Populacao: %d\n", populacao6_2);
printf("Area (km2): %.2f\n", area6_2);
printf("PIB (em bilhoes): %.2f\n", pib6_2);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos6_2);

printf ("\n --- Exibição da Cidade 3 - Estado F ---\n");
printf("Codigo da cidade: %s\n", codigo6_3);
printf("Nome da cidade: %s\n", nome_da_cidade6_3);
printf("Populacao: %d\n", populacao6_3);
printf("Area (km2): %.2f\n", area6_3);
printf("PIB (em bilhoes): %.2f\n", pib6_3);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos6_3);

printf ("\n --- Exibição da Cidade 4 - Estado F ---\n");
printf("Codigo da cidade: %s\n", codigo6_4);
printf("Nome da cidade: %s\n", nome_da_cidade6_4);
printf("Populacao: %d\n", populacao6_4);
printf("Area (km2): %.2f\n", area6_4);
printf("PIB (em bilhoes): %.2f\n", pib6_4);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos6_4);

// carta 7 - Estado 7 //

printf ("\n --- Exibição da Cidade 1 - Estado G ---\n");
printf("Codigo da cidade: %s\n", codigo7_1);
printf("Nome da cidade: %s\n", nome_da_cidade7_1);
printf("Populacao: %d\n", populacao7_1);
printf("Area (km2): %.2f\n", area7_1);
printf("PIB (em bilhoes): %.2f\n", pib7_1);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos7_1);

printf ("\n --- Exibição da Cidade 2 - Estado G ---\n");
printf("Codigo da cidade: %s\n", codigo7_2);
printf("Nome da cidade: %s\n", nome_da_cidade7_2);
printf("Populacao: %d\n", populacao7_2);
printf("Area (km2): %.2f\n", area7_2);
printf("PIB (em bilhoes): %.2f\n", pib7_2);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos7_2);

printf ("\n --- Exibição da Cidade 3 - Estado G ---\n");
printf("Codigo da cidade: %s\n", codigo7_3);
printf("Nome da cidade: %s\n", nome_da_cidade7_3);
printf("Populacao: %d\n", populacao7_3);
printf("Area (km2): %.2f\n", area7_3);
printf("PIB (em bilhoes): %.2f\n", pib7_3);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos7_3);

printf ("\n --- Exibição da Cidade 4 - Estado G ---\n");
printf("Codigo da cidade: %s\n", codigo7_4);
printf("Nome da cidade: %s\n", nome_da_cidade7_4);
printf("Populacao: %d\n", populacao7_4);
printf("Area (km2): %.2f\n", area7_4);
printf("PIB (em bilhoes): %.2f\n", pib7_4);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos7_4);

// carta 8 - Estado 8 //

printf ("\n --- Exibição da Cidade 1 - Estado H ---\n");
printf("Codigo da cidade: %s\n", codigo8_1);
printf("Nome da cidade: %s\n", nome_da_cidade8_1);
printf("Populacao: %d\n", populacao8_1);
printf("Area (km2): %.2f\n", area8_1);
printf("PIB (em bilhoes): %.2f\n", pib8_1);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos8_1);

printf ("\n --- Exibição da Cidade 2 - Estado H ---\n");
printf("Codigo da cidade: %s\n", codigo8_2);
printf("Nome da cidade: %s\n", nome_da_cidade8_2);
printf("Populacao: %d\n", populacao8_2);
printf("Area (km2): %.2f\n", area8_2);
printf("PIB (em bilhoes): %.2f\n", pib8_2);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos8_2);

printf ("\n --- Exibição da Cidade 3 - Estado H ---\n");
printf("Codigo da cidade: %s\n", codigo8_3);
printf("Nome da cidade: %s\n", nome_da_cidade8_3);
printf("Populacao: %d\n", populacao8_3);
printf("Area (km2): %.2f\n", area8_3);
printf("PIB (em bilhoes): %.2f\n", pib8_3);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos8_3);

printf ("\n --- Exibição da Cidade 4 - Estado H ---\n");
printf("Codigo da cidade: %s\n", codigo8_4);
printf("Nome da cidade: %s\n", nome_da_cidade8_4);
printf("Populacao: %d\n", populacao8_4);
printf("Area (km2): %.2f\n", area8_4);
printf("PIB (em bilhoes): %.2f\n", pib8_4);
printf("Numero de pontos turisticos: %d\n", pontos_turisticos8_4);

return 0;
}