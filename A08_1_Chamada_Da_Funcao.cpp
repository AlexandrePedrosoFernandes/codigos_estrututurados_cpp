// Este algoritimo utiliza uma funcao que recebe 3 numeros inteiros e retorna
//      o maior numero entre eles
//      Alexandre Pedroso Fernandes - RA: 435791 - SJC
//      Setembro de 2011

include<stdio.h>
include<stdlib.h>

//prototipo da funcao

int MaiorValor(int valor1, int valor2, int valor3);

int main(int argc, char *argv[])
{
    /*Declaracao das variaveis*/
    
    int numero1, numero2, numero3, resultado; 

    /*Leitura das variaveis*/
    
    printf("Testa maior valor.\n\n");
    printf("Informe o primeiro valor: ");
    scanf("%d", &numero1);
    printf("Informe o segundo valor : ");
    scanf("%d", &numero2);
    printf("Informe o terceiro valor: ");
    scanf("%d", &numero3);
    printf("\n");
    
    /*Chamada da funcao MaiorValor*/
    
    resultado=MaiorValor(numero1, numero2, numero3);
    printf("O maior valor e: %d", resultado);
    printf("\n\n");

    /*Finalizacao do programa*/
    
    system("PAUSE");
    return(0);
}

MaiorValor(int valor1, int valor2, int valor3)
{
    if(valor1>valor2)
    {
        if(valor1>valor3)
            return valor1;
        else
            return valor3;
    }
    else if(valor2>valor3)
            return valor2;
         else
            return valor3;
}
