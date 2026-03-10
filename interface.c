#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "header.h"
bool verdadeiro=true;
int opcao;
void titulo(){
printf("\n");
printf("#################################\n");
printf("#                               #\n");
printf("#            CAIXAME           #\n");
printf("#   Sistema de Caixa e Estoque  #\n");
printf("#                               #\n");
printf("#################################\n");
printf("\n");
}

void menu(){

while(verdadeiro){

printf("Escolha uma das opções abaixo:\n");
printf("1 - Abrir Caixa\n");
printf("2 - Abrir Estoque\n");
printf("0 - Sair\n");

scanf("%d",&opcao);

switch(opcao){

case 1:

iniciar();
break;

case 2:
est();
break;

case 0:
verdadeiro=false;
break;

default:
printf("Opção inválida\n");

}
}
}
void tituloc (){
printf("################\n");
printf("#              #\n");
printf("#    CAIXA     #\n");
printf("#              #\n");
printf("################\n");
}

void tituloe () {
printf("################\n");
printf("#              #\n");
printf("#    ESTOQUE   #\n");
printf("#              #\n");
printf("################\n");
}

void opc () {
printf("1 - Nova venda\n");
printf("2 - Remover item\n");
printf("3 - Finalizar venda\n");
printf("4 - Cancelar venda\n");
printf("5 - Consultar produto\n");
printf("0 - Fechar caixa\n");

}

void opce() {
printf("1 - Cadastrar produto\n");
printf("2 - Remover produto\n");
printf("3 - Atualizar quantidade\n");
printf("4 - Listar produtos\n");
printf("5 - Consultar produto\n");
printf("6 - Produtos com estoque baixo\n");
printf("7 - Entrada de mercadoria\n");
printf("8 - Saida de mercadoria\n");
printf("9 - Relatorio de estoque\n");

printf("0 - Voltar ao menu principal\n");
}

