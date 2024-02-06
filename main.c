#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void calcQ (float elementaryChargeCoefficient, int elementaryChargeExponent);
void calcN (float elementaryChargeCoefficient, int elementaryChargeExponent);

int main(void)
{
  setlocale(LC_ALL, "Portuguese_Brazil");

  printf(" CALCULADORA CARGA ELÉTRICA\n\n ESCOLHA O QUE DESEJA CALCULAR:\n\n 1 - Q ( CARGA ELÉTRICA )\n 2 - N ( QUANTIDADE DE ELÉTRONS )\n\n");

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

void calcQ (float elementaryChargeCoefficient, int elementaryChargeExponent) {
  float coefficientN;
  int exponentN;

  printf("\n Q = N . E");

  printf("\n Forneça o coeficiente de N\n ");
  scanf("%f", &coefficientN);

  printf(" Forneça o expoente de N\n ");
  scanf("%i", &exponentN);

  float coefficientQ = elementaryChargeCoefficient * coefficientN;
  int exponentQ = elementaryChargeExponent + exponentN;

  printf("\n Q = %.3f x 10^%i . %.1f x 10^%i", coefficientN, exponentN, elementaryChargeCoefficient, elementaryChargeExponent);
  printf("\n Q = %.3f x 10^%i", coefficientQ, exponentQ);
}

void calcN (float elementaryChargeCoefficient, int elementaryChargeExponent) {
  printf("\n N = Q : E");
}