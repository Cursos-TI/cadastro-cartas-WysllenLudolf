#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 
  //Variáveis criadas para a carta 1

  char estado1[20] = "Amazonas";
  char codigodacartaA[10] = "A01";
  char nomedacidadeA[50] = "Manaus";
  int populacaoA = 2300;
  float areakm2A = 11000000;
  float pibA = 35.0;
  int pontoturisticoA = 15;

  //Variáveis criadas para a carta 2

  char estado2[20] = "Bahia";
  char codigodacartaB[10] = "B01";
  char nomedacidadeB[50] = "Salvador";
  int populacaoB = 2500;
  float areakm2B = 600000;
  float pibB = 62.0;
  int pontoturisticoB = 16;
  
  // Área para entrada de dados

  //comandos para que o cliente inclua os dados das cartas de forma interativa:

  printf("Digite o nome do Estado: \n");
  scanf("%s", &estado1, &estado2);

  printf("Digite a cidade: \n");
  scanf("%s", &nomedacidadeA, &nomedacidadeB);

  printf("Informe o código da carta: \n");
  scanf("%s", &codigodacartaA, &codigodacartaB);

  printf("Qual a população da cidade: \n");
  scanf("%d", &populacaoA, &populacaoB);

  printf("Qual o tamanho da cidade em km2: \n");
  scanf("%f", &areakm2A, &areakm2B);

  printf("Qual o PIB da cidade: \n");
  scanf("%f", &pibA, &pibB);

  printf("Quantos são os pontos turísticos dessa cidade: \n");
  scanf("%d", &pontoturisticoA, &pontoturisticoB);

  // Área para exibição dos dados da cidade

  //comandos para a impressão das informações na tela

  printf("Estado: %s\n", estado1, estado2);
  printf("Cidade: %s\n", nomedacidadeA, nomedacidadeB);
  printf("Código: %s\n", codigodacartaA, codigodacartaB);
  printf("População: %d\n", populacaoA, populacaoB);
  printf("Área Km²: %.0f Km²\n", areakm2A, areakm2B);
  printf("PIB: %.0f Bilhões\n", pibA, pibB);
  printf("Pontos Turísticos: %d\n", pontoturisticoA, pontoturisticoB);
  


return 0;
} 
