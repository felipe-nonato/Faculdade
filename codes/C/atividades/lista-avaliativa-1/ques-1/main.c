// ------------ QUESTÃO 1 ------------

#include <stdio.h>
#include "./head.h"

int main(void) {
  // declarando e lendo variaveis
  int x;
  printf("Valor de x: ");
  scanf("%d",&x);
  int y;
  printf("Valor de y: ");
  scanf("%d",&y);

  printf("resultado: %d", somaPrimos(x,y));
  return 0;}