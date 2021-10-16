#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu(char nome[], char tratamento[] );

int main()
{
    char * tratamento = "";
    char nome[40] = "";
    char* novo="";
    int nItens = 10;
    char produtos[10][100];
    int opcao, x = 0;
    do{
            opcao = menu(nome,tratamento);

            switch (opcao) {
            case 1:
                {
                    int aux;
                    char aux1[40];
                    printf("\nVoce esta no Cadastro ");
                    printf("\nDigite seu nome: ");
                    scanf("%s", &aux1);
                    printf("Escolha uma opçao de tratamento:\n[1] Sr. | [2]Sra. | [3]Outro: ");
                    scanf("%d", &aux);
                    strcpy( nome , aux1);
                    if(aux == 1){
                        tratamento = ", Sr. ";
                    }else if(aux == 2){
                        tratamento = ", Sra. ";
                    }else{
                        tratamento = ", Sre. ";
                    }
                }
                break;
            case 2:
                //Produtos
                break;
            case 3:
                //Carrinho
                break;
            }

            x++;

    }while(x<2);
}

int menu(char nome[], char tratamento[] ){
    int retorno;
    printf("\nOla%s%s !",tratamento, nome);
    printf("Por favor, ecolha uma das opcoes do menu");
    printf("\n__  _");
	printf("\n___  |________________\t\t1. Cadastro");
	printf("\n __  |  E-commerce   /\t\t2. Produtos");
	printf("\n  _  |  UFABC - PE  /\t\t3. Carrinho");
	printf("\n___  |_____________/\t\t");
	printf("\n __  /____________\t\t");
	printf("\n____ O          O\t\tInsira aqui: ");
	scanf("%d", &retorno);
    return retorno;
}
