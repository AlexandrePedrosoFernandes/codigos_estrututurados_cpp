// Este algoritmo realiza Calculos da Raiz Quadrada de numeros reais positivos ou negativos
//	   Alexandre Pedroso Fernandes
//	   Abril de 2011
	
include <stdio.h>
include <stdlib.h>
include <math.h>

int main(int argc, char argv[])
{
  float valorReal;     // valor de entrada do numero real
  float raizQuad;      // Raiz quadrada do numero real informado
  float modulo;        // modulo do numero negativo
  
  // entrada do numero real
  
  printf("Calculo da Raiz Quadrada de numeros Reais.\n\n\n");
  printf("Digite o numero real  : ");
  scanf("%f", &valorReal);
  printf("\n");
  
  // calculo da raiz quadrada do numero informado
  
  if (valorReal>0)
  {
    raizQuad=sqrt(valorReal);

    // saida de dados para numeros positivos

    printf("O numero real e positivo.\n\n");
    printf("A raiz quadrada e: %.2f\n", raizQuad);
    printf("\n\n\n"); 
  }
  else
  {
    modulo=abs(valorReal);
    raizQuad=sqrt(modulo);      

    // saida de dados para numeros negativos

    printf("O numero real e negativo.\n\n");
    printf("A raiz quadrada e: %.2f",raizQuad);
    printf("i");
    printf("\n\n\n");
  }    
  
  // finalizacao do programa principal
  
  system("PAUSE");
  return 0;
}
