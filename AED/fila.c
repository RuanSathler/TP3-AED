#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila* CriarFila() {
    Fila* fila = (Fila*)malloc(sizeof(Fila));
    fila->sentinela = (No*)malloc(sizeof(No));  
    fila->sentinela->anterior = fila->sentinela;
    fila->sentinela->proximo = fila->sentinela;
    fila->tamanho = 0;
    return fila;
}

int FilaVazia(Fila* fila) {
    if (fila->tamanho == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

void  InserirFila(Fila* fila, int idade) {
    No* novo = (No*)malloc(sizeof(No));
    novo->idade = idade;

    No* ultimo = fila->sentinela->anterior;

    novo->proximo = fila->sentinela;
    novo->anterior = ultimo;

    ultimo->proximo = novo;
    fila->sentinela->anterior = novo;

    fila->tamanho++;
}


void OrdenarFila(Fila* fila) {
    No *i, *j, *proximo;
    if (fila->tamanho < 2) return; 

    for (i = fila->sentinela->proximo; i != fila->sentinela; i = i->proximo) {
        for (j = fila->sentinela->proximo; j->proximo != fila->sentinela; j = j->proximo) {
            proximo = j->proximo;

            if (j->idade < proximo->idade) {
                j->anterior->proximo = proximo;
                proximo->proximo->anterior = j;

                j->proximo = proximo->proximo;
                proximo->anterior = j->anterior;

                j->anterior = proximo;
                proximo->proximo = j;

                if (fila->sentinela->proximo == j) {
                    fila->sentinela->proximo = proximo;
                }
                if (fila->sentinela->anterior == proximo) {
                    fila->sentinela->anterior = j;
                }
            }
        }
    }
}

int AtenderCliente(Fila* fila) {
    if (FilaVazia(fila)) {
        return -1; // Fila vazia
    }

    No* primeiro = fila->sentinela->proximo;
    int idade = primeiro->idade;

    fila->sentinela->proximo = primeiro->proximo;
    primeiro->proximo->anterior = fila->sentinela;

    free(primeiro);
    fila->tamanho--;

    return idade;
}


void LiberarFila(Fila* fila) {
    while (!FilaVazia(fila)) {
        AtenderCliente(fila);
    }
    free(fila->sentinela);
    free(fila);
}
