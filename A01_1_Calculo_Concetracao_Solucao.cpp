// Este algor�tmo realiza Calculos de concentra��o de solu��es, retornando o T�tulo da solu��o 	a porcentagem em peso e a molalidade
//	   Alexandre Pedroso Fernandes
//	   Abril de 2011
	
include <stdio.h>
include <stdlib.h>

int main(int argc, char argv[])
{
  float m1;     // massa de agua
  float m2;     // massa do soluto
  float mol1;   // mol do soluto
  float t;      // Titulo da solu��o
  float p;      // porcentagem da solu��o
  float w;      // molabilidade 
  float n2;      // rela��o da divis�o da massa do soluto (m2) pelo mol do soluto (mol1)
  
  // entrada de dados do funcionario pelo teclado
  
  printf("Calculo de concentracao de solucoes.\n\n");
  printf("Digite a massa de agua  : ");
  scanf("%f", &m1);
  printf("Digite a massa de soluto: ");
  scanf("%f", &m2);
  printf("Digite o mol do soluto  : ");
  scanf("%f", &mol1);
  printf("\n");
  
  // calculo do t�tulo da solu��o
  
  t = m2/(m1+m2);
  
  // calculo da porcentagem em peso da solu��o
  
  p = t*100;

  // calculo da molabilidade
  
  n2 = m2/mol1;
  w = (n2/(0,001*m1))*100;

  // saida de dados para monitor
  
  printf("Os resultados obtidos: .\n\n");
  printf("O Titulo              : %.3f\n", t);
  printf("A Porcentagem em peso : %.2f\n", p);
  printf("A Molabilidade        : %.3f\n\n", w);
  printf("Fim de processamento\n\n");
  
  // finaliza��o do programa principal
  
  system("PAUSE");
  return 0;
}
