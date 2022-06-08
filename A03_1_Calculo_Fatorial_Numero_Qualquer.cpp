// Este algoritmo calcula o fatorial de um numero k qualquer informado

include <stdio.h>
include <stdlib.h>

int main(int argc, char argv[])
{
    // Declaracao das variaveis para calculo do fatorial
    
    int k;        /* variavel para armazenar um numero qualquer informado para calculo de seu respectivo fatorial*/
    int r;        /* variavel para armazenar o contador temporario do comando para*/
    int f;        /* variavel para armazenar o resultado do calculo do fatorial*/
    
    // Leitura do numero para o calculo de seu fatorial
    
    printf("Calculo do Fatorial de um Numero.\n\n");
    printf("Digite um numero para calculo de seu fatorial: ");
    scanf("%d", &k);
    printf("\n\n");
    
    // calculo do fatorial do numero informado
    
    f=1;
    r=k;
    for(r=k;r>0;r--)
    {
         f=f*r;
    }
         
    // Exibe o valor do fatorial do numero informado
    
    printf("Valor do fatorial e igual a: %d", f);      
    printf("\n\n\n");
         
    // Finalizacao do programa principal
    
    system("PAUSE");
    return 0;
}
