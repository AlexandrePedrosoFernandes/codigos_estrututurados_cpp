// Este algoritmo realiza o calculo de imposto de renda a pagar ou restituir tendo como base o salario bruto anual
//      e gera o numero de parcelas e valor a ser pago em caso de imposto a pagar
//      Alexandre Pedroso Fernandes
//      maio de 2011

include <stdio.h>
include <stdlib.h>

int main(int argc, char*argv[])
{
  
  // Declaracao das variaveis para calculo de imposto de renda a pagar ou restituir 
  
  float salario_Mensal;          /* variavel para entrada do valor do salario bruto mensal do contribuinte*/
  float salario_Anual;           /* variavel para acumular o valor do salario bruto anual do contribuinte*/
  float imposto_Retido;          /* variavel para acumular o total de imposto retido na fonte*/
  float imposto_Devido;          /* variavel para acumular o total de imposto devido aos cofres publicos no ano*/
  float restituicao;             /* variavel para acumular o valor da restituicao devida ao contribuinte*/
  float imposto_Pagar;            /* variavel para acumular o total de imposto a pago aos cofres publicos */
  float valor_Parcelas;          /* variavel para acumular o valor da parcela ou parcelas a serem pagas pelo contribuinte*/
  int numero_Parcelas;           /* variavel para acumular o numero de parcelas a serem pagas pelo contribuinte*/
  
  // Leitura do salario bruto anual do contribuinte e imposto retido na fonte
  
  printf("Calculo de Imposto de Renda a Pagar ou Restituir.\n\n\n");
  printf("Digite o valor do Salario Anual Bruto    : ");
  scanf("%f", &salario_Anual);
  printf("Digite o valor do Imposto Retido na Fonte: ");
  scanf("%f", &imposto_Retido);
  printf("\n\n");
  
  // Calculo do salario bruto Mensal
  
  salario_Mensal=salario_Anual/12;
  
  // Calculo do imposto pago e do imposto devido

  if(salario_Mensal<1499.16)
  {
    imposto_Pagar=0;
    imposto_Devido=0;
  }
  if(salario_Mensal<2246.76 && salario_Mensal>1499.15)
    imposto_Devido=((salario_Anual-(112.43*12))*0.075)-imposto_Retido;
  if(salario_Mensal<2995.71 && salario_Mensal>2246.75)
    imposto_Devido=((salario_Anual-(280.94*12))*0.15)-imposto_Retido;
  if(salario_Mensal<3743.20 && salario_Mensal>2995.70)
    imposto_Devido=((salario_Anual-(505.62*12))*0.225)-imposto_Retido;
  if(salario_Mensal>3743.19)
    imposto_Devido=((salario_Anual-(692.78*12))*0.275)-imposto_Retido;
 
  // Calculo da restituicao do imposto pago ou valor e numero de parcelas a pagar aos cofres publicos

  if(imposto_Devido<0 || imposto_Devido==0)
  {
    restituicao=abs(imposto_Devido);
    numero_Parcelas=0;
  }
  else
  {
         imposto_Pagar=imposto_Devido;
         valor_Parcelas=imposto_Pagar/6;
         numero_Parcelas=6;
         if(valor_Parcelas<50)
         {
             valor_Parcelas=imposto_Pagar/5;
             numero_Parcelas=5;
             if(valor_Parcelas<50)
             {
                 valor_Parcelas=imposto_Pagar/4;
                 numero_Parcelas=4;
                 if(valor_Parcelas<50)
                 {
                     valor_Parcelas=imposto_Pagar/3;
                     numero_Parcelas=3;
                     if(valor_Parcelas<50)
                     {
                          valor_Parcelas=imposto_Pagar/2;
                          numero_Parcelas=2;
                          if(valor_Parcelas<50)
                          {
                              valor_Parcelas=imposto_Pagar;
                              numero_Parcelas=1;
                          }
                     }
                 }
             }
         }
  }

  // Exibe os valores do salario mensal e anual, imposto pago, imposto devido, restituicao com numero e valor das parcelas
  
  printf("Resumo do calculo de Imposto de Renda.\n\n\n");
  printf("Salario Anual   : %.2f\n", salario_Anual);
  printf("Salario Mensal  : %.2f\n", salario_Mensal);
  printf("Imposto Retido  : %.2f\n", imposto_Retido);
  printf("Imposto Devido  : %.2f\n", imposto_Devido);
  printf("\n");
  printf("Restituicao     : %.2f\n", restituicao);
  printf("\n");
  printf("Imposto a Pagar : %.2f\n", imposto_Pagar);
  printf("Numero de Parcelas: %.d\n", numero_Parcelas);
  printf("Valor da Parcela  : %.2f\n", valor_Parcelas);
  printf("\n\n");
  
  // Finalizacao do programa principal
  
  system("PAUSE");
  return 0;
}
