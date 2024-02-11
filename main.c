#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

const float ELEMENTARY_CHARGE_COEFFICIENT = 1.6;
const int ELEMENTARY_CHARGE_EXPONENT = -19;

void calcQ ();
void calcN ();
void cientificNotation (float *coefficient, int *exponent);

int main(void)
{
  setlocale(LC_ALL, "Portuguese_Brazil");

  printf(" CALCULADORA CARGA ELÉTRICA\n\n ESCOLHA O QUE DESEJA CALCULAR:\n\n 1 - Q ( CARGA ELÉTRICA )\n 2 - N ( QUANTIDADE DE ELÉTRONS )\n\n");

  int operation;

  do {
    printf(" ");
    scanf("%i", &operation);
  } while (operation != 1 && operation != 2);

  if ( operation == 1 ) {
    calcQ();
  } else {
    calcN();
  }


  return 0;
}

void calcQ () {
  float coefficientN;
  int exponentN;

  printf("\n Q = N . E");

  printf("\n Forneça o coeficiente de N\n ");
  scanf("%f", &coefficientN);

  printf(" Forneça o expoente de N\n ");
  scanf("%i", &exponentN);

  float coefficientQ = ELEMENTARY_CHARGE_COEFFICIENT * coefficientN;
  int exponentQ = ELEMENTARY_CHARGE_EXPONENT + exponentN;

  cientificNotation(&coefficientQ, &exponentQ);

  printf("\n Q = %.3f x 10^%i . %.1f x 10^%i", coefficientN, exponentN, ELEMENTARY_CHARGE_COEFFICIENT, ELEMENTARY_CHARGE_EXPONENT);
  printf("\n Q = %.3f x 10^%i", coefficientQ, exponentQ);
}

void calcN () {
  float coefficientQ;
  int exponentQ;

  printf("\n N = Q : E");

  printf("\n Forneça o coeficiente de Q\n ");
  scanf("%f", &coefficientQ);

  printf(" Forneça o expoente de Q\n ");
  scanf("%i", &exponentQ);

  float coefficientN = coefficientQ / ELEMENTARY_CHARGE_COEFFICIENT;
  int exponentN = exponentQ - ELEMENTARY_CHARGE_EXPONENT;

  cientificNotation(&coefficientN, &exponentN);

  printf("\n N = %.3f x 10^%i : %.1f x 10^19", coefficientQ, exponentQ, ELEMENTARY_CHARGE_COEFFICIENT);
  printf("\n N = %.3f x 10^%i", coefficientN, exponentN);
}

void cientificNotation (float *coefficient, int *exponent) {
  float moduleCoefficient = fabs(*coefficient);
  
  while (moduleCoefficient >= 10) {
    moduleCoefficient /= 10;
    *coefficient /= 10;

    *exponent += 1;
  }

  while (moduleCoefficient < 1) {
    moduleCoefficient *= 10;
    *coefficient *= 10;

    *exponent -= 1;
  }
}