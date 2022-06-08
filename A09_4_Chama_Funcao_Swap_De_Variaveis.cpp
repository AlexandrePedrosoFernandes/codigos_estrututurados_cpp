//Este algoritmo realiza o swap ou troca de valores de duas variaveis
//     Alexandre Pedroso Fernandes - RA: 415791 - SJC
//     Setembro 2011

include<stdio.h>
include<stdlib.h>


//prototipo do procedimento

void SWAP(int *,int *);

int main(int argc, char *argv[])
{
    // declaracao das variaveis
    
    int numero1,numero2;

    // leitura de dois numeros inteiros
    
    printf("Programa para realizar o SWAP de valores em variaveis.\n\n");
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d",&numero1);
    printf("Digite o segundo numero inteiro : ");
    scanf("%d",&numero2);
    printf("\n");
    
    // chamada do procedimento SWAP
    
    SWAP(&numero1,&numero2);
    
    // exibe os resultados
    
    printf("O conteudo da primeira variavel apos o SWAP e: %d\n", numero1);
    printf("O conteudo da segunda variavel apos o SWAP e : %d\n", numero2);
    printf("\n");
    
    // finalizacao do programa
    
    system("PAUSE");
    return(0);
}  

void SWAP(int *valor1, int *valor2)
{
    int troca; // declaracao de variavel auxiliar
    
    troca=*valor1;
    valor1=*valor2;
    valor2=troca;
    
    // exibe o resultado
    
    printf("O conteudo da primeira variavel apos o SWAP e: %d\n", valor1);
    printf("O conteudo da segunda variavel apos o SWAP e : %d\n", valor2);
    printf("\n");
}
 
