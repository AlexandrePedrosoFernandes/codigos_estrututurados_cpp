// Este algoritmo exemplifica o uso de ponteiros e para isso manipula os dados 
//      da estrutura funcionario.
//      Alexandre Pedroso Fernandes - Ra: 435791 - SJC
//      Setembro 2011

include <stdio.h>
include <stdlib.h>

int main(int argc, char *argv[])
{

    /* definicao da estrutura de funcionarios 8 com os campos codFunc, 
                 idadeFunc, sexoFunc e salFunc. */
    struct funcionario
    {
           int codFunc;     // codigo do funcionario
           int idadeFunc;   // idade do funcionario
           char sexoFunc;   // sexo do funcionario, M (masculino) e F (feminino)
           float salFunc;   // salario do funcionario
    };               

    // declaracao de variaveis

    struct funcionario funcionario1;   // variavel do tipo estrutura
    struct funcionario funcionario2;   // variavel do tipo estrutura
    struct funcionario *pontFunc;      // ponteiro para variavel do tipo estrutura

    // entrada de dados do funcionario 1

    printf("A seguir entre com todos os dados do funcionario.\n\n");
    printf("Digite o codigo: ");
    scanf("%d", &funcionario1.codFunc); // note o uso do operador &
    printf("Digite a idade: ");
    scanf("%d", &funcionario1.idadeFunc); // note o uso do operador & 
    printf("Digite o sexo [F ou M]: ");
    scanf("%*c%c", &funcionario1.sexoFunc); // note o uso do operador &
    printf("Digite o salario (R$): ");
    scanf("%f ", &funcionario1.salFunc); // note o uso do operador &
    printf("\n");

    // saida de dados do funcionario 1 para a tela (monitor de video)

    printf("Os dados do funcionario 1 sao:\n\n");
    printf("Codigo: %d\n", funcionario1.codFunc);
    printf("Idade: %d\n", funcionario1.idadeFunc);
    printf("Sexo: %c\n", funcionario1.sexoFunc);
    printf("Salario (R$): %.2f\n", funcionario1.salFunc);
    printf("\n");

    // uso de ponteiro para estrutura

    pontFunc = &funcionario1;

    // uso do operador seta para a manipulacao de campos
    // Quando a passagem de parametro para uma funcao e feita atraves de ponteiro
    //      e o argumento e uma estrutura, o acesso aoa campos da estrutura e 
    //      feita com o operador seta (->)
    
    funcionario2.codFunc = 99;
    funcionario2.idadeFunc = pontFunc->idadeFunc;
    funcionario2.sexoFunc = pontFunc->sexoFunc;
    funcionario2.salFunc = pontFunc->salFunc * 1.5;

    // saida de dados do funcionario 2 para a tela (monitor de video)

    printf("Os dados do funcionario 2 sao:\n\n");
    printf("Codigo: %d\n", funcionario2.codFunc);
    printf("Idade: %d\n", funcionario2.idadeFunc);
    printf("Sexo: %c\n", funcionario2.sexoFunc);
    printf("Salario (R$): %.2f\n", funcionario2.salFunc);
    printf("\n");

    // alteracao do conteudo de alguns campos de funcionario 1 usando ponteiro

    pontFunc->codFunc = 79; // (*pontFunc).codFunc = 79;
    pontFunc->idadeFunc = 25; // (*pontFunc).idadeFunc = 25;

    // saida de dados do funcionario 1 para a tela (monitor de video)

    printf("Os dados do funcionario 1 sao:\n\n");
    printf("Codigo: %d\n", funcionario1.codFunc);
    printf("Idade: %d\n", funcionario1.idadeFunc);
    printf("Sexo: %c\n", funcionario1.sexoFunc);
    printf("Salario (R$): %.2f\n", funcionario1.salFunc);
    printf("\n");

    // finalizacao do programa principal

    system("PAUSE");
    return 0;
}
