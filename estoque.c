#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "header.h"  // mantém suas interfaces

struct Produto {
    char nome[50];
    float preco;
    int quantidade;

};

// Variável global que armazena o produto
struct Produto estoque;

// Função para adicionar produto
void addp() {
    system("clear");
    addpt(); // banner de adicionar do interface.c

    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", estoque.nome);

    printf("Digite o preço do produto: ");
    scanf("%f", &estoque.preco);

    printf("Digite a quantidade: ");
    scanf("%d", &estoque.quantidade);

    printf("\nProduto adicionado:\n");
    printf("Nome: %s\n", estoque.nome);
    printf("Preço: %.2f\n", estoque.preco);
    printf("Quantidade: %d\n", estoque.quantidade);
}

// Função para remover produto
void removep(struct Produto *p) {
    system("clear");
    removepr(); // banner de remover do interface.c

    char nome[50];
    printf("Digite o nome do produto a remover: ");
    scanf(" %[^\n]", nome);

    if(strcmp(p->nome, nome) == 0) {
        strcpy(p->nome, "");
        p->preco = 0.0;
        p->quantidade = 0;
        printf("Produto removido com sucesso!\n");
    } else {
        printf("Produto não encontrado!\n");
    }
}

// Função para listar produto
void listarp() {
    system("clear");
    listarpr(); // banner de listar do interface.c

    if(strcmp(estoque.nome, "") == 0) {
        printf("Nenhum produto cadastrado.\n");
    } else {
        printf("Nome: %s\n", estoque.nome);
        printf("Preço: %.2f\n", estoque.preco);
        printf("Quantidade: %d\n", estoque.quantidade);
    }
}

// Função principal do menu
int est() {
    int opcao = -1;

    while(opcao != 0) {
        system("clear");
        tituloe(); // banner do menu principal
        opce();    // opções do menu

        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                addp();
                break;
            case 2:
                removep(&estoque);
                break;
            case 3:
                listarp();
                break;
            case 0:
                system("clear");
                titulo(); // banner de saída
                break;
            default:
                printf("Opção inválida!\n");
                while(getchar() != '\n'); // limpa buffer
        }

        printf("\nPressione ENTER para continuar...");
        while(getchar() != '\n'); // limpa buffer do scanf
        getchar(); // espera ENTER
    }

    return 0;
}
