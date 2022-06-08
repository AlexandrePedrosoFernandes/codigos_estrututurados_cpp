//Este algoritmo utiliza uma funcao para testar seu um numero inteiro recebido
//     como parametro, e ou nao um numero primo. Em caso de receber numeros 
//     nulos ou negativos exibe mensagem de erro.
//     Alexandre Pedroso Fernandes - RA: 435791 - SJC
//     Setembro 2011

include<stdio.h>
include<stdlib.h>

// Prototipo de funcao

int EhNumeroPrimo(int valor);

int main(int argc, int argv[])
{
    // Declare as variaveis
    
    int numero, primo;
    
    // Leitura da variavel

    printf("Teste para identificar numeros primos.\n\n");
    printf("Digite um numero inteiro positivo qualquer: ");
    scanf("%d", &numero);
    printf("\n");
    
    // Chamada da funcao testa primo
    
    primo=EhNumeroPrimo(numero);
    
    // Exibe resultado
    
    if(primo==-1)
        printf("O numero %d digitado e invalido", numero);    
    if(primo==0)
        printf("O numero %d nao e primo", numero);    
    if(primo==1)
        printf("O numero %d e um numero primo", numero);
    printf("\n\n");
        
    //Finaliza��o do programa
    
    system("PAUSE");
    return(0);
}

int EhNumeroPrimo(int valor)
{
    //declaracao de variaveis locais
    
    int i, primo;
    
    // testa se o numero e um numero primo
    
    if (valor<1)
        return -1;
    else
    {
        primo=0;
        for(i=1;i<(valor+1);i++)
        {   
            if((valor%i)==0)
                primo=primo+1;    
        }
        if(primo==2)
            return 1;
        else
            return 0;
    }
}    
