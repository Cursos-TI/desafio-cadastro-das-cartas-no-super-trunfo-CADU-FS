#include <stdio.h>
#include <string.h>

int main() {
  // Declaração das variáveis da primeira carta.
  char estado;
  char codigo[4];
  char cidade[20];
  int pontos_turis;
  float area, pib, densidade, pib_per_capita, poder;
  unsigned long int populacao;

  // Declaração das variáveis da segunda carta
  char estado2;
  char codigo2[4];
  char cidade2[20];
  int pontos_turis2;
  float area2, pib2, densidade2, pib_per_capita2, poder2;
  unsigned long int populacao2;

  // Coleta e armazenamento dos dados da primeira carta do usuário.
  printf("Digite uma letra (entre 'A' e 'H') que represente um Estado: ");
  scanf("%c", &estado);
  printf("Digite um número para o código do Estado: ");
  scanf("%s", codigo);
  printf("Digite o nome de uma cidade: ");
  scanf("%s", cidade);
  printf("Digite a população dessa cidade: ");
  scanf("%lu", &populacao);
  printf("Digite a área (em Km²) dessa cidade: ");
  scanf("%f", &area);
  printf("Digite o PIB dessa cidade: ");
  scanf("%f", &pib);
  printf("Digite quantos pontos turísticos essa cidade possui: ");
  scanf("%i", &pontos_turis);

  printf("\n");
  
  // Coleta e armazenamento dos dados da segunda carta do usuário.
  printf("Agora adicione os dados da segunda carta.\n");
  scanf("%*c");
  printf("Digite uma letra (entre 'A' e 'H') que represente um Estado: ");
  scanf("%c", &estado2);
  printf("Digite um número para o código do Estado: ");
  scanf("%s", codigo2);
  printf("Digite o nome de uma cidade: ");
  scanf("%s", cidade2);
  printf("Digite a população dessa cidade: ");
  scanf("%lu", &populacao2);
  printf("Digite a área (em Km²) dessa cidade: ");
  scanf("%f", &area2);
  printf("Digite o PIB dessa cidade: ");
  scanf("%f", &pib2);
  printf("Digite quantos pontos turísticos essa cidade possui: ");
  scanf("%i", &pontos_turis2);

  // Cálculo da densidade das duas cartas
  densidade = (float)populacao / area;
  densidade2 = (float)populacao2 / area2;

  // Cálculo do PIB per capita das duas cidades
  pib_per_capita = pib / (float)populacao;
  pib_per_capita2 = pib2 / (float)populacao2;

  // Cálculo do super poder das duas cartas
  poder = (float)pontos_turis + area + pib + pib_per_capita + (float)populacao + (1 / densidade);
  poder2 = (float)pontos_turis2 + area2 + pib2 + pib_per_capita2 + (float)populacao2 + (1 / densidade2);

  // Armazenamento do resultado da comparação de cada atributo das cidades
  short int pt = pontos_turis2 > pontos_turis;
  short int pop = populacao2 > populacao;
  short int ar = area2 > area;
  short int pb = pib2 > pib;
  short int dens = densidade2 < densidade;
  short int ppc = pib_per_capita2 > pib_per_capita;
  short int pdr = poder2 > poder;

  printf("\n");

  // Impressão do vencedor em cada atributo
  printf("Comparação de cartas:\n");
  printf("População: Carta %i venceu (%i)\n", pop + 1, pop);
  printf("Área: Carta %i venceu (%i)\n", ar + 1, ar);
  printf("PIB: Carta %i venceu (%i)\n", pb + 1, pb);
  printf("Pontos turísticos: Carta %i venceu (%i)\n", pt + 1, pt);
  printf("Densidade populacional: Carta %i venceu (%i)\n", dens + 1, dens);
  printf("PIB per capita: Carta %i venceu (%i)\n", ppc + 1, ppc);
  printf("Super Poder: Carta %i venceu (%i)\n", pdr + 1, pdr);

  return 0;
}