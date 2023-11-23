#include <stdio.h>
#include <stdlib.h>
#include "menuPokedex.h"


void inicializarPokedex(Pokedex *pokedex);

void exibirSubMenuPokedex(Pokedex *pokedex,Pokemon *pokemon) {
    int escolha;
    do {
        printf("Escolha uma opção para a Pokédex: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                listarPokemon(pokedex);
                break;
          case 2:
          adicionarPokemon(pokedex,pokemon);

          case 3: liberarPokedex(pokedex);
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (escolha != 0);
}