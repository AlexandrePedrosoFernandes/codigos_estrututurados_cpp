// Esta algoritmo totaliza a quantidade de salarios maior que o salario medio.
//      Foi alterado para utilizar o regitro de funcionarios
//      Alexandre Pedroso Fernandes - RA 435791 - SJC
//      Agosto de 2011

include <stdio.h>
include <stdlib.h>

define TAMANHO 5

int main(int argc, char * argv[])
{

    /* definicao da estrutura de funcionarios*/
    typedef struct 
    {
            int codFunc;   // codigo do funcionario    
            int idadeFunc; // idade do funcionario    
            float salFunc;   // salario do funcionario    
    }funcionario;
    
    /* declaracao de duas variaveis do tipo estrutura funcionarios*/

    funcionario func[TAMANHO];

    //Definicao das variaveis

    const int totalFunc= TAMANHO; // total de funcionarios
    int somaIdade=0;              // soma das idades dos funcionarios
    float somaSalario=0;          // soma dos salarios dos funcionarios
    int acimaMedia=0;             // total de salarios acima da media
    
    float idadeMedia;     // idade media dos funcionarios
    float salarioMedio;   // salario medio dos funcionarios
    
    int i;  // contador temporario do comando for

    // leitura dos dados dos funcionarios

    printf("Exibe os funcionarios com salario acima da media.\n\n\n");

    for(i=0;i<TAMANHO;i++)
    {
          printf("A seguir, entre com todos os dados do funcionario %d.\n\n", i+1);
          printf("Digite o codigo: ");
          scanf("%d",&func[i].codFunc);
          printf("Digite a idade : ");
          scanf("%d",&func[i].idadeFunc);
          printf("Digite o salario: ");
          scanf("%f",&func[i].salFunc);
          printf("\n");
    }
                          
    // calculo intermediario

    for(i=0;i<TAMANHO;i++)
    {
          somaIdade += func[i].idadeFunc;
          somaSalario += func[i].salFunc;
    }
    
    // calculo da idade media e do salario medio do funcioionarios
    
    idadeMedia=(float)somaIdade/totalFunc;
    salarioMedio=somaSalario/totalFunc;
    
    // saida dos dados calculados
    
    printf("Os dados calculados sao: \n\n");
    printf("O Total de funcionarios = %d\n", totalFunc);
    printf("A idade media           = %.2f anos\n", idadeMedia);
    printf("O salario media         = %.2f reais\n", salarioMedio);
    printf("\n");
    
    // escrita dos salarios acima da media dos funcionarios

    for(i=0;i<TAMANHO;i++)
    {
          if(func[i].salFunc>salarioMedio)
          {
                printf("O salario esta acima da media para o funcionario %d.\n\n", i+1);
                printf("Codigo : %d\n",func[i].codFunc);
                printf("Idade  : %d anos\n",func[i].idadeFunc);
                printf("salario: %.2f reais\n",func[i].salFunc);
                acimaMedia=acimaMedia+1;
          }
    }
    printf("\n");
    printf("Total de salario acima da media: %d\n\n",acimaMedia);

    // finalizacao do programa

    system("PAUSE");
    return(0);
}
