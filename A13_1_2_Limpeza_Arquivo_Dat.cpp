/* 
   Limpeza de arquivo
   Alexandre Pedroso Fernandes - RA: 435791 - UFSCar
   Dezembro 2011
*/

include <stdio.h>
include "registro.h"

int main(){
    tProduto produto, busca;
    FILE *arq, *seleciona, *parcial;
    char nomeArquivo[20];
        
    //Insere nome do arquivo
    printf("Limpeza de Arquivos.\n\n");
    printf("Digite o nome do arquivo para limpeza: ");
    scanf("%s", &nomeArquivo);
    printf("\n");
    
    //abre os arquivos
    arq=fopen(nomeArquivo,"r");
    seleciona=fopen("codigo.dat","w+");
    parcial=fopen("parcial.dat","w+");
    
    if(!arq)
            printf("Erro na abertura do arquivo de produtos.\n");
    else{
         if(!seleciona)
               printf("Erro na abertura do arquivo de codigos selecionados.\n");
         else{
              if(!parcial)
                      printf("Erro na abertura do arquivo parcial de produtos.\n");
              else{
                   // leitura do codigo selecionado
                   printf("Digite o codigo do produto: ");
                   scanf("%d", &busca.codigo);
                   printf("\n");
                   
                   // seleciona registros do codigo selecionada
                   while(fread(&produto, sizeof(produto),1, arq) != 0){
                        if(busca.codigo==produto.codigo)
                             fwrite(&produto, sizeof(produto),1, seleciona);
                        else
                             fwrite(&produto, sizeof(produto),1, parcial);
                   }
                   printf("Limpeza de arquivos realizada com sucesso!\n\n");
              }
         }
		 /* fecha o arquivo */
		 fclose(parcial);
		 fclose(seleciona);
		 fclose(arq);
    }
    
    // finaliza o programa
    system("PAUSE");
    return(0);
}
