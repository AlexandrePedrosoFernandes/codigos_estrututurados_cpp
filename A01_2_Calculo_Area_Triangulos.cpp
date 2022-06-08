// Este algor�tmo permite calcular a �rea de triangulos a partir de 3 pontos quaisquer
//	   Alexandre Pedroso Fernandes
//	   Abril de 2011
	
include <stdio.h>
include <stdlib.h>
include <math.h>

int main(int argc, char argv[])
{
	float	x1;        //coordenada x do ponto1
	float	y1;        //coordenada y do ponto1 
	float	x2;        //coordenada x do ponto2 
	float	y2;        //coordenada y do ponto2 
	float	x3;        //coordenada x do ponto3 
	float	y3;        //coordenada y do ponto3 
	float	pa;        //potencia de a
	float	pb;        //potencia de b
	float pc;        //potencia de c
	float a;         //distancia entre P1 e P2
	float	b;         //distancia entre P1 e P3
	float c;         //distancia entre P2 e P3
	float	s;         //semiper�metro
 	int	r;           //expoente da potencia��o
  float area1;     //variavel auxiliar para calculo do produto de s*(s-a)*(s-b)*(s-c) 
  float area;      //resultado da area do triangulo
  
  // entrada de dados do funcionario pelo teclado
  
  printf("Calculo da Area do Triangulo.\n\n\n");
  printf("Digite coordenada x do ponto 1 : ");
  scanf("%f", &x1);
  printf("Digite coordenada y do ponto 1 : ");
  scanf("%f", &y1);
  printf("\n\n");
  printf("Digite coordenada x do ponto 2 : ");
  scanf("%f", &x2);
  printf("Digite coordenada y do ponto 2 : ");
  scanf("%f", &y2);
  printf("\n\n");
  printf("Digite coordenada x do ponto 3 : ");
  scanf("%f", &x3);
  printf("Digite coordenada y do ponto 3 : ");
  scanf("%f", &y3);
  printf("\n\n");
  
  // calculo da distancia entre os 3 pontos  do triangulo

  r=2;
  pa=(pow((x1-x2),r)+pow((y1-y2),r));
  a=sqrt(pa);
  pb=(pow((x1-x3),r)+pow((y1-y3),r));
  b=sqrt(pb);
  pc=(pow((x2-x3),r)+pow((y2-y3),r));
  c=sqrt(pc);

  // calculo do semiperimetro do triangulo
  
  s=(a+b+c)/2;
    
  // calculo da area do triangulo
  
  area1=(s*(s-a)*(s-b)*(s-c));
  area=sqrt(area1);

  //  printf("Os resultados obtidos: .\n\n");

  printf("a  : %.2f\n", a);
  printf("b : %.2f\n", b);
  printf("c : %.2f\n", c);
  printf("\n\n");
  printf("semiperimetro     : %.2f\n", s);
  printf("\n\n");
  printf("Area do triangulo : %.2f\n", area);
  printf("\n\n");
  
  // finaliza��o do programa principal
  
  system("PAUSE");
  return 0;
}
