/*
** Função : Implementação do TAD Vetor de Inteiros
** Autor : Hygor Alves
** Data : 04/06/2024
** Observações: Implementação das funções do TAD Vetor de Inteiros
*/

#include <stdio.h>
#include <stdlib.h>
#include "ED-lista2-questao01.h"

Vetor* criar_vetor(int capacidade) {
    Vetor* vetor = (Vetor*)malloc(sizeof(Vetor));
    vetor->dados = (int*)malloc(capacidade * sizeof(int));
    vetor->tamanho = 0;
    vetor->capacidade = capacidade;
    return vetor;
}

void inserir_elemento(Vetor* vetor, int elemento) {
    if (vetor->tamanho == vetor->capacidade) {
        vetor->capacidade *= 2;
        vetor->dados = (int*)realloc(vetor->dados, vetor->capacidade * sizeof(int));
    }
    vetor->dados[vetor->tamanho++] = elemento;
}

void remover_elemento(Vetor* vetor, int posicao) {
    if (posicao < 0 || posicao >= vetor->tamanho) {
        printf("Posição inválida\n");
        return;
    }
    for (int i = posicao; i < vetor->tamanho - 1; i++) {
        vetor->dados[i] = vetor->dados[i + 1];
    }
    vetor->tamanho--;
}

int consultar_elemento(Vetor* vetor, int posicao) {
    if (posicao < 0 || posicao >= vetor->tamanho) {
        printf("Posição inválida\n");
        return -1;
    }
    return vetor->dados[posicao];
}

void imprimir_vetor(Vetor* vetor) {
    for (int i = 0; i < vetor->tamanho; i++) {
        printf("%d ", vetor->dados[i]);
    }
    printf("\n");
}

void remover_vetor(Vetor* vetor) {
    free(vetor->dados);
    free(vetor);
}
