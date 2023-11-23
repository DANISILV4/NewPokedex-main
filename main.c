#include <stdio.h>
#include <stdlib.h>
#include "lerarq.h"
#include "colecao.h"
#include "pokedex.h"
#include "mochila.h"
#include "menuMochila.h"
#include "menuColecao.h"
#include "menuPokedex.h"

//comentario professor

void exibirMenuPrincipal(Mochila *mochila, Colecao *colecao, Pokedex *pokedex,Pokedex *pokemon) {
    int escolha;
    do {
        // Exibe o menu principal
        printf("\n----- Menu Principal -----\n");
        printf("1. Mochila\n");
        printf("2. Colecao\n");
        printf("3. Pokedex\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        // Chama a função correspondente com base na escolha do usuário
        switch (escolha) {
            case 1:
                exibirSubMenuMochila(mochila,pokedex);
                break;
            case 2:
                exibirSubMenuColecao(colecao);
                break;
            case 3:
                exibirSubMenuPokedex(pokedex,pokemon);
                break;
            case 4:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (escolha != 4);
}

int main() {
    Pokedex *dex = NULL;
    Mochila mochila;
    Colecao colecao;
    Pokemon pokedex;
    

    
    exibirMenuPrincipal(&mochila, &colecao, &pokedex,&pokemon);

  

    return 0;
}
