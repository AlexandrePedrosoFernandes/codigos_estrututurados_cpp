//Este algoritmo calcula o MDC entre dois numeros inteiros
//     Alexandre Pedroso Fernandes - RA: 435791 - SJC
//     Setembro 2011

include<stdio.h>
include<stdlib.h>

int MDC(int n1, int n2);

int main(int argc, int argv[])
{
   //declaracao das variaveis
   
   int numero1, numero2, resultado;
   
   //leitura dos numeros
   
   printf("Calculo do MDC de dois numeros.\n\n");
   do
   {
       printf("Digite o primeiro numero: ");
       scanf("%d", &numero1);
   }
   while(numero1<0); 
   do
   {
       printf("Digite o segundo numero : "); 
       scanf("%d", &numero2);
   }
   while(numero2<0);
   printf("\n"); 
   
   // Chamada da funcao MDC
   
   resultado=MDC(numero1,numero2);
   
   // Exibe resultado
   
   printf("O MDC entre %d ",numero1);
   printf("e %d ",numero2);
   printf("e = %d",resultado);
   printf("\n\n");
    
   // Finalizacao do programa
   
   system("PAUSE");
   return(0);
}
            
int MDC(int n1, int n2)
{
    // declaracao das variaveis locais
    
    int mdc,resto1,resto2,i;
    
    //Inicializacao das variaveis
    
    mdc=0;
    resto1=-1;
    resto2=-1;
    if(n1>n2)
    {
        for(i=1;i<=n2;i++)
        {
             resto1=n1%i;
             resto2=n2%i;
             if((resto1==0)&&(resto2==0))
                  mdc=i;
        }
    }
    else
    {
        for(i=1;i<=n1;i++)
        {
             resto1=n1%i;
             resto2=n2%i;
             if(resto1==0 && resto2==0)
                  mdc=i;
        }
    }
    return mdc;
}    
                  
