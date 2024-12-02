# 📋 Ordenação de Fila Duplamente Encadeada com Bubble Sort  

Este projeto implementa uma **fila duplamente encadeada** e utiliza o algoritmo **Bubble Sort** para ordenar os elementos com base em critérios definidos (neste caso, a idade). É uma aplicação prática que combina manipulação de estruturas de dados e algoritmos de ordenação, ideal para estudos e aprendizado.  

---

## 🛠️ **Funcionalidades**  

- **Criação de fila duplamente encadeada** com nó sentinela para facilitar inserções e remoções.  
- **Ordenação com Bubble Sort**, adaptado para listas duplamente encadeadas.  
- **Simulação de atendimento de clientes**:  
  - Os clientes são ordenados com base na idade (do maior para o menor).  
  - Atendimento ocorre em sequência, removendo os elementos da fila.  
- **Leitura de dados a partir de arquivo externo**.  

---

## 📂 **Estrutura do Projeto**  

- **fila.h**: Arquivo de cabeçalho com definições das estruturas e funções.  
- **fila.c**: Implementação da fila duplamente encadeada e funções relacionadas.  
- **main.c**: Programa principal que lê os dados, ordena a fila e exibe o atendimento.  
- **clientes.txt**: Arquivo de entrada contendo idades simulando os clientes.  

---

## 🧠 **Como Funciona**  

### Estrutura da Fila  
- Cada elemento da fila é representado por um nó com as seguintes propriedades:  
  - `idade`: valor armazenado no nó.  
  - `anterior` e `proximo`: ponteiros para o nó anterior e o próximo.  

### Ordenação  
- A ordenação é feita diretamente na fila usando o **Bubble Sort**, onde cada nó é comparado com seu próximo, e os ponteiros são ajustados para trocar os elementos.  

### Atendimento  
- O atendimento é feito removendo os nós da frente da fila, garantindo que o nó atendido seja o de maior prioridade (neste caso, a maior idade).  

---

## 📜 **Lições Aprendidas**  

Este projeto destaca a importância de:  
- Manipular ponteiros de forma cuidadosa para evitar inconsistências em estruturas encadeadas.  
- Adaptar algoritmos para diferentes estruturas de dados, como listas duplamente encadeadas.  
- Trabalhar com entradas externas, como arquivos, para simular dados reais.  

---

## 🤝 **Contribuições**  

Este projeto contou com as seguintes contribuições:  
- **Desenvolvimento**: Ruan Sathler 
- **Orientação**: Professor Juan  
- **Apoio Institucional**: IComp/UFAM  

