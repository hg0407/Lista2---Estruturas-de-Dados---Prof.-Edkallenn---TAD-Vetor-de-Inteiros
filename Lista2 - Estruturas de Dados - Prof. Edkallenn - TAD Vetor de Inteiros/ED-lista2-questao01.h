/*
** Função : Interface para TAD Vetor de Inteiros
** Autor : Hygor Alves
** Data : 04/06/2024
** Observações: Declarações das funções do TAD Vetor de Inteiros
*/

#ifndef ED_LISTA2_QUESTAO01_H
#define ED_LISTA2_QUESTAO01_H

typedef struct {
    int *dados;
    int tamanho;
    int capacidade;
} Vetor;

Vetor* criar_vetor(int capacidade);

void inserir_elemento(Vetor* vetor, int elemento);

void remover_elemento(Vetor* vetor, int posicao);

int consultar_elemento(Vetor* vetor, int posicao);

void imprimir_vetor(Vetor* vetor);

void remover_vetor(Vetor* vetor);

#endif
