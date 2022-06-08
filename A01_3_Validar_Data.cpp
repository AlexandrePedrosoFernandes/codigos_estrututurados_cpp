// Este algor�tmo permite validar data 
//	   Alexandre Pedroso Fernandes RA: 435791
//	   Abril de 2011
	
include <stdio.h>
include <stdlib.h>

int main(int argc, char argv[])
{
  int dia1;           // dia da primeira data
  int mes1;           // mes da primeira data
  int ano1;           // ano da primeira data
  int dia2;           // dia da segunda data
  int mes2;           // mes da segunda data
  int ano2;           // ano da segunda data
  int consisteAno;     // vari�vel para consist�ncia do ano informado
  int consisteMes;     // vari�vel para consist�ncia do mes informado
  int consisteDia;     // vari�vel para consist�ncia do dia informado
        
  // entrada da primeira datas 
  
  printf("Consit�ncia de Datas.\n\n\n");
  printf("Entre com a primeira Data.\n\n");
  printf("Digite o dia : ");
  scanf("%d", &dia1);
  printf("Digite o mes : ");
  scanf("%d", &mes1);
  printf("Digite o ano : ");
  scanf("%d", &ano1);
  printf("\n\n");
  
  // verifica��o da validade e consistencia da primeira data

  consisteAno=ano1!=0;
  consisteMes=(mes1>0) and (mes1<13);
  consisteDia=((dia1>0) and (dia1<29) and (mes1==2)) or ((dia1>0) and (dia1<31) and ((mes1==4) or (mes1==6) or (mes1==9) or (mes1==11)))  or ((dia1>0) and (dia1<32) and ((mes1==1) or (mes1==3) or (mes1==5) or (mes1==7) or (mes1==8) or (mes1==10) or (mes1==12))); 

  // Exibe resultado da validade da primeira Data

  printf("Os resultados obtidos: .\n\n");
  printf("Dia1 valido  : %d\n", consisteDia);
  printf("Mes1 valido  : %d\n", consisteMes);
  printf("Ano1 valido  : %d\n", consisteAno);
  printf("\n\n");
  
  // entrada da segunda datas 
  
  printf("Entre com a segunda Data.\n\n");
  printf("Digite o dia : ");
  scanf("%d", &dia2);
  printf("Digite o mes : ");
  scanf("%d", &mes2);
  printf("Digite o ano : ");
  scanf("%d", &ano2);
  printf("\n\n");
  
  // verifica��o da validade e consistencia da primeira data

  consisteAno=ano2!=0;
  consisteMes=(mes2>0) and (mes2<13);
  consisteDia=((dia2>0) and (dia2<29) and (mes2==2)) or ((dia2>0) and (dia2<31) and ((mes2==4) or (mes2==6) or (mes2==9) or (mes2==11)))  or ((dia2>0) and (dia2<32) and ((mes2==1) or (mes2==3) or (mes2==5) or (mes2==7) or (mes2==8) or (mes2==10) or (mes2==12))); 

  // Exibe resultado da validade da primeira Data

  printf("Os resultados obtidos: .\n\n");
  printf("Dia1 valido  : %d\n", consisteDia);
  printf("Mes1 valido  : %d\n", consisteMes);
  printf("Ano1 valido  : %d\n", consisteAno);
  printf("\n\n");
  
  // finaliza��o do programa principal
  
  system("PAUSE");
  return 0;
}
