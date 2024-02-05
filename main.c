#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void calcQ (int elementaryChargeCoefficient, int elementaryChargeExponent);
void calcN (int elementaryChargeCoefficient, int elementaryChargeExponent);

int main(void)
{
  setlocale(LC_ALL, "Portuguese_Brazil");

  printf(" CALCULADORA CARGA EL�TRICA\n\n ESCOLHA O QUE DESEJA CALCULAR:\n\n 1 - Q ( CARGA EL�TRICA )\n 2 - N ( QUANTIDADE DE EL�TRONS )\n\n");

  int operation;

  float elementaryChargeCoefficient = 1.6;
  int elementaryChargeExponent = -19;


  do {
    printf(" ");
    scanf("%i", &operation);
  } while (operation != 1 && operation != 2);

  if ( operation == 1 ) {
    calcQ(elementaryChargeCoefficient, elementaryChargeExponent);
  } else {
    calcN(elementaryChargeCoefficient, elementaryChargeExponent);
  }


  return 0;
}

void calcQ (int elementaryChargeCoefficient, int elementaryChargeExponent) {}

void calcN (int elementaryChargeCoefficient, int elementaryChargeExponent) {}