#include <stdio.h>
#include <string.h>

int main() {
  // Declaração das variáveis necessárias.
  char estado;
  char codigo[4];
  char cidade[20];
  int populacao, pontos_turis;
  float area, pib;

  char estado2;
  char codigo2[4];
  char cidade2[20];
  int populacao2, pontos_turis2;
  float area2, pib2;

  // Coleta e armazenamento dos dados da primeira carta do usuário.
  printf("Digite uma letra (entre 'A' e 'H') que represente um Estado: ");
  scanf("%c", &estado);
  printf("Digite um número para o código do Estado: ");
  scanf("%s", codigo);
  printf("Digite o nome de uma cidade: ");
  scanf("%s", cidade);
  printf("Digite a população dessa cidade: ");
  scanf("%i", &populacao);
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
  scanf("%i", &populacao2);
  printf("Digite a área (em Km²) dessa cidade: ");
  scanf("%f", &area2);
  printf("Digite o PIB dessa cidade: ");
  scanf("%f", &pib2);
  printf("Digite quantos pontos turísticos essa cidade possui: ");
  scanf("%i", &pontos_turis2);

  printf("\n");

  // Impressão dos dados da primeira carta do usuário.
  printf("Carta: 1\n");
  printf("Estado: %c\n", estado);
  printf("Código: %c%s\n", estado, codigo);
  printf("Nome da Cidade: %s\n", cidade);
  printf("População: %i\n", populacao);
  printf("Área: %.2f\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Número de ponto turísticos: %i\n", pontos_turis);

  printf("\n");

  // Impressão dos dados da segunda carta do usuário.
  printf("Carta: 2\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %c%s\n", estado2, codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %i\n", populacao2);
  printf("Área: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Número de ponto turísticos: %i\n", pontos_turis2);

  return 0;
}