#ifndef FILA_H
#define FILA_H

typedef struct No No;
struct No {
    int idade;
    struct No* anterior;
    struct No* proximo;
} ;

typedef struct Fila Fila;
struct Fila {
    No* sentinela; // Nó sentinela
    int tamanho;   // Número de elementos na fila
} ;

// Cria e inicializa uma fila com nó sentinela.
// Aloca memória para a fila e inicializa o nó sentinela.
// Retorna um ponteiro para a fila criada.
Fila* CriarFila();

// Insere uma idade no final da fila.
// Adiciona um novo nó no final da fila, próximo ao sentinela.
// Parâmetros: fila - ponteiro para a fila, idade - idade do cliente a ser inserida.
void InserirFila(Fila* fila, int idade);

// Ordena a fila por idade (decrescente).
// Utiliza o algoritmo Bubble Sort para ajustar os ponteiros dos nós.
// Parâmetro: fila - ponteiro para a fila a ser ordenada.
void OrdenarFila(Fila* fila);

// Atende o primeiro cliente da fila.
// Remove o primeiro nó da fila e retorna a idade do cliente atendido.
// Parâmetro: fila - ponteiro para a fila.
// Retorna a idade do cliente atendido.
int AtenderCliente(Fila* fila);

// Libera a memória da fila.
// Libera a memória alocada para todos os nós, incluindo o sentinela.
// Parâmetro: fila - ponteiro para a fila a ser liberada.
void LiberarFila(Fila* fila);

// Verifica se a fila está vazia.
// Retorna 1 se a fila não contiver nenhum cliente e 0 caso contrário.
// Parâmetro: fila - ponteiro para a fila.
// Retorna 1 se vazia, 0 caso contrário.
int FilaVazia(Fila* fila);
#endif 
