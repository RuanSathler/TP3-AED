#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main() {
    FILE* arquivo = fopen("clientes.txt", "r");
    if (arquivo==NULL) {
        printf("Erro ao abrir o arquivo clientes.txt\n");
        return 1;
    }

    Fila* fila = CriarFila();
    int idade;

    while (fscanf(arquivo, "%d", &idade) != EOF) {
        InserirFila(fila, idade);
    }
    fclose(arquivo);

    OrdenarFila(fila);

    printf("Atendendo os clientes:\n");
    while (!FilaVazia(fila)) {
        int atendido = AtenderCliente(fila);
        printf("Idade atendida: %d\n", atendido);
    }

    LiberarFila(fila);

    return 0;
}
