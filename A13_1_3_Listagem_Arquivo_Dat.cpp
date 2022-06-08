/*
	Listagem dos dados do arquivo informado
	Alexandre 2011
*/

include <stdio.h>
include "registro.h"

int main(){
	tProduto produto;
	int cont = 0;
	FILE *arquivo;
    char nomeArquivo[20];
        
    //Insere nome do arquivo
    printf("Criacao de Arquivos.\n\n");
    printf("Digite o nome do arquivo para listar: ");
    scanf("%s", &nomeArquivo);
    printf("\n");

	/* criacao de uma lista de notas nova (vazia!) */
	arquivo = fopen(nomeArquivo, "r");

	if(!arquivo)
		perror("O arquivo nao foi aberto");
	else{
		while(fread(&produto, sizeof(produto),
					1, arquivo) != 0){
			printf("Registro #%d\n", cont++);
			printf("  > Codigo: %d\n", produto.codigo);
			printf("  > Qdd   : %.2f\n", produto.quantidade);
			printf("  > Preco : %.2f\n\n", produto.valorUnitario);
		}

		/* fecha o arquivo */
		fclose(arquivo);
	}
    system("PAUSE");
	return 0;
}
