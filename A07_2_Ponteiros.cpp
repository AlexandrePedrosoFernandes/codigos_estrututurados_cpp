// Este programa troca o conteudo de duas variaveis utilizando ponteiros
//      Alexandre Pedroso Fernandes - RA: 435791 - SJC
//      Setembro 2011

include<stdio.h>
include<stdlib.h>

int main(int argc, char *argv[])
{
    
    /* Declaracao das variaveis*/
    
    int valor1; // primeira variavel
    int valor2; // segunda variavel
    int troca;  // variavel de troca
    
    /* Declaracao doS ponteiros*/

    int *pont_valor1;
    int *pont_valor2;
    
    /* Leitura daa variaveis inteiros*/
    
    printf("Troca valores da Variaveis.\n\n");
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &valor1);
    printf("Digite o segundo numero inteiro : ");
    scanf("%d", &valor2);
    printf("\n");
    
    /* Troca valor das variaveis*/
    
    pont_valor1 = &valor1;    
    pont_valor2 = &valor2;    
    troca = *pont_valor1;
    valor1 = *pont_valor2;
    valor2 = troca;    

    /* Exibe valores trocados*/
    
    printf("O valor da primeira variavel e: %d\n", valor1); 
    printf("O valor da segunda  variavel e: %d\n", valor2);
    printf("\n");

    /* Finalizacao do programa*/
    
    system("PAUSE");
    return(0);
}
