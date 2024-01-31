#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
  setlocale(LC_ALL, "Portuguese_Brazil");

  printf("CALCULADORA CARGA ELÉTRICA\n\nESCOLHA O QUE DESEJA CALCULAR:\n\n1 - Q ( CARGA ELÉTRICA )\n2 - N ( QUANTIDADE DE ELÉTRONS )");


  return 0;
}
