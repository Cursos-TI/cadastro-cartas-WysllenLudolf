#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1 = "Amazonas";
  char codigodacartaA[10] = "A01";
  char nomedacidadeA[50] = "Manaus";
  int populacaoA = 2303732;
  float areakm2A = 11.401092;
  float pibA = 35.000000000;
  int pontoturisticoA = 15;

  char estado2 = "Bahia";
  char codigodacartaB[10] = "B01";
  char nomedacidadeB[50] = "Salvador";
  int populacaoB = 2564204;
  float areakm2B = 693.453;
  float pibB = 62.954000000;
  int pontoturisticoB = 16;
  
  // Área para entrada de dados

  printf("Digite o nome do Estado: \n");
  scanf("%s", &estado1, &estado2);

  printf("Digite a cidade: \n");
  scanf("%s", &nomedacidadeA, nomedacidadeB);

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

  printf("Estado: %s\n", estado1);
  printf("Cidade: %s\n", nomedacidadeA);
  printf("Código: %s\n", codigodacartaA);
  printf("População: %f\n", populacaoA);
  printf("Área Km²: %f\n", areakm2A);
  printf("PIB: %f\n", pibA);
  printf("Pontos Turísticos: %d\n", pontoturisticoA, pontoturisticoB);



  // Área para exibição dos dados da cidade

  


return 0;
} 
