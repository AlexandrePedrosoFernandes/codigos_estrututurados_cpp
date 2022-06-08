// Este algoritmo utiliza um funcao para ler, calcular a raiz quadrada
//      de de 100 numeros quaisquer e exibi-los posteriormente.
//      Alexandre Pedroso Fernandes - RA: 435791 - SJC
//      Setembro 2011

include<stdio.h>
include<stdlib.h>
include<math.h>

define TAMANHO 100

float calculaRaiz(float raiz);

int main(int argc, char *argv[])
{
    /*Declaracao das variaveis*/
    
    float numero[TAMANHO];
    float resultado[TAMANHO];
    float raiz; /* variavel utilizada para o calculo da raiz quadrada*/
    int i;      /* variavel utilizada no loop PARA*/
    
    /*Rotina para leitura */

    printf("Calculo da raiz Quadrada para 100 numeros reais.\n\n");
    for(i=0;i<TAMANHO;i++)
    {
             printf("Digite o %d numero real: ", i+1);
             scanf("%f", &numero[i]);
             resultado[i]=calculaRaiz(numero[i]);
             printf("A raiz do numero informado e: %.2f\n", resultado[i]); 
    }

    /*Finalizacao do programa*/
    
    printf("Fim de processamento.\n");
    system("PAUSE");
    return(0);
}

float calculaRaiz(float raiz)
{
      /*Funcao para o calculo da raiz*/

      raiz=sqrt(raiz);
      return raiz;
}
      
