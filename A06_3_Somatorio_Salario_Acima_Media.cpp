// Esta algoritmo totaliza a quantidade de salarios maior que o salario medio
//      Alexandre Pedroso Fernandes - RA 435791 - SJC
//      Agosto de 2011

include <stdio.h>
include <stdlib.h>

define TAMANHO 5

int main(int argc, char * argv[])
{

    //Definicao das variaveis

    int codFunc[TAMANHO];   // codigo do funcionario    
    int idadeFunc[TAMANHO]; // idade do funcionario    
    float salFunc[TAMANHO];   // salario do funcionario    
    
    const int totalFunc= TAMANHO; // total de funcionarios
    int somaIdade=0;              // soma das idades dos funcionarios
    float somaSalario=0;          // soma dos salarios dos funcionarios
    int acimaMedia=0;             // total de salarios acima da meida
    
    float idadeMedia;     // idade media dos funcionarios
    float salarioMedio;   // salario medio dos funcionarios
    
    int i;  // contador temporario do comando for

    // leitura dos dados dos funcionarios

    for(i=0;i<TAMANHO;i++)
    {
          printf("A seguir, entre om todos os dados do funcionario %d.\n\n", i+1);
          printf("Digite o codigo: ");
          scanf("%d",&codFunc[i]);
          printf("Digite a idade : ");
          scanf("%d",&idadeFunc[i]);
          printf("Digite o salario: ");
          scanf("%f",&salFunc[i]);
          printf("\n");
    }
                          
    // calculo intermediario

    for(i=0;i<TAMANHO;i++)
    {
          somaIdade += idadeFunc[i];
          somaSalario += salFunc[i];
    }
    
    // calculo da idade media e do salario medio do funcioionarios
    
    idadeMedia=(float)somaIdade/totalFunc;
    salarioMedio=somaSalario/totalFunc;
    
    // saida dos dados calculados
    
    printf("Os dados calculados sao: \n");
    printf("O Total de funcionarios = %d\n", totalFunc);
    printf("A idade media           = %.2f anos\n", idadeMedia);
    printf("O salario media         = %.2f reais\n", salarioMedio);
    printf("\n");
    
    // escrita dos salarios acima da media dos funcionarios

    for(i=0;i<TAMANHO;i++)
    {
          if(salFunc[i]>salarioMedio)
          {
                printf("O salario esta acima da media para o funcionario %d.\n", i+1);
                printf("Codigo : %d\n",codFunc[i]);
                printf("Idade  : %d anos\n",idadeFunc[i]);
                printf("salario: %.2f reais\n",salFunc[i]);
                acimaMedia=acimaMedia+1;
          }
    }
    printf("\n");
    printf("Total de salario acima da media: %d\n\n",acimaMedia);

    // finalizacao do programa

    system("PAUSE");
    return(0);
}
