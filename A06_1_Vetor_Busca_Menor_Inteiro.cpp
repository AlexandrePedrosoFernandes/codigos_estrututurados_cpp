// Este algoritmo le um vetor de tamanho 20 de numeros inteiros e encontra o menor
// 	   elememto e sua posicao dentro vetor, exibindo o menor valor e sua posicao.
//     Alexandre Pedroso Fernandes - RA 435791 - SJC
//	   Agosto de 2011

include <stdio.h>
include <stdlib.h>

int main(int argc, char *argv[])
{
    
    // declaracao da variaveis
    int i;             /*variavel para incrementar o para*/
    int menorValor;    /*variavel para armazenar o menor valor*/
    int menorPosicao;  /*variavel para armazenar a posicao do menor valor*/
    int valor[20];     /*vetor pra armazenar os valores inteiros*/
    
    // Inicializacao das variaveis e leitura dos vatores
    printf("Algoritmo para Iniciar o Vetor de 20 posicoes e localizar o menor valor inteiro.\n\n");
    menorValor=0;
    menorPosicao=0;
    for(i=0;i<20;i++)
    {
        printf("Digite um valor inteiro qualquer: ");
        scanf("%d", &valor[i]);
    }
    printf("\n");
        
    // localiza o menor valor e sua posicao
    for(i=0;i<20;i++)
    {
         if(i==0)
         {
              menorValor=valor[i];
              menorPosicao=i;                       
         }
         if(valor[i]<menorValor)
         {
              menorValor=valor[i];
              menorPosicao=i;                       
         }
    }

    // exibe o menor valor do vetor de vinte numeros e sua posicao
    printf("O Menor valor inteiro do Vetor   : %d ", menorValor);
    printf("\n");   
    printf("A Posicao do menor valor do Vetor: %d ", menorPosicao);   
    printf("\n\n");   


    // finalizacao do programa
    system("PAUSE");
    return(0);
}
