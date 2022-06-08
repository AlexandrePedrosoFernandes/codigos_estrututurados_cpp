/*
	Criacao de um arquivo de agenda DAT
    Alexandre Pedroso Fernandes - RA: 435791 - UFSCar 2011
*/

include <stdio.h>
include "registro.h"

int main(){
	tProduto produto;
	FILE *arq;
    char nomeArquivo[20];
        
    //Insere nome do arquivo
    printf("Criacao de Arquivos.\n\n");
    printf("Digite o nome do arquivo para criar: ");
    scanf("%s", &nomeArquivo);
    printf("\n");
    

	/* criacao de uma lista de notas nova (vazia!) */
	arq = fopen(nomeArquivo, "w");

	if(!arq)
		perror("Criacao do arquivo falhou");
	else{
		printf("Codigo (0 para terminar): ");
		scanf("%d", &produto.codigo);

		while(produto.codigo != 0){
			printf("Quantidade    : ");
			scanf("%f", &produto.quantidade);
			printf("Valor Unit�rio: ");
			scanf("%f", &produto.valorUnitario);

			/* copia dos dados para o arquivo */
			fwrite(&produto, sizeof(produto), 1, arq);

			/* proximo aluno */
			printf("Codigo (0 para terminar): ");
			scanf("%d", &produto.codigo);
		}


		/* fecha o arquivo */
		fclose(arq);
	}

	return 0;
}
