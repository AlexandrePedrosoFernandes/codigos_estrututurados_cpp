//Este algoritmo le e calcula a soma de numeros racionais
//     Alexandre Pedroso Fernandes - RA: 435791 - SJC
//     Setembro de 2011

include<stdio.h>
include<stdlib.h>

typedef struct
{
        int numerador,denominador;
}tRacional;

//prototipos dos procedimentos
        
void LerNumeroRacional(tRacional *);

void SomarNumerosRacionais(tRacional *,tRacional *,tRacional *);

int main(int argc, char *argv[])
{

    //declaracao dos numeros racionais
    
    tRacional R1,R2,soma;
    
    //chamada da funcao para ler um numero racional    
    
    printf("Le e Soma Numeros Racionais.\n\n"); 
    printf("Entre com primeiro numero racional.\n\n"); 
    LerNumeroRacional(&R1);
    printf("Entre com segundo numero racional.\n\n"); 
    LerNumeroRacional(&R2);
    
    //Chamada da funcao para somar dois numeros racionais    
    
    SomarNumerosRacionais(&R1,&R2,&soma);
    
    //Exibe resultado
    
    printf("O resultado da soma e: ");
    printf("%d",soma.numerador);
    printf("/");
    printf("%d",soma.denominador);
    printf("\n\n");    
    
    //Finalizacao do programa
    
    system("PAUSE");
    return(0);
}

void LerNumeroRacional(tRacional *R)
{
    //leitura de numeros racional
    
    printf("Didite o numerador do numero racional  : ");
    scanf("%d", &R->numerador);
    printf("Didite o denominador do numero racional: ");
    scanf("%d", &R->denominador);
    printf("\n");
}
 
void SomarNumerosRacionais(tRacional *R1,tRacional *R2,tRacional *soma)
{
    //Soma de dois numeros racionais
    
    soma->numerador=(R1->numerador*R2->denominador)+(R2->numerador*R1->denominador);
    soma->denominador=(R1->denominador*R2->denominador);
}
