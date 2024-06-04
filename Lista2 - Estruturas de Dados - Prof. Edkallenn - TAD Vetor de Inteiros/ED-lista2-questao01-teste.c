/*
** Função : Teste para o TAD Vetor de Inteiros
** Autor : hygor alves
** Data : 04/06/2024
** Observações: Testes das funções do TAD Vetor de Inteiros
*/

#include <stdio.h>
#include "ED-lista2-questao01.h"

int main() {
    Vetor* vetor = criar_vetor(5);

    inserir_elemento(vetor, 10);
    inserir_elemento(vetor, 20);
    inserir_elemento(vetor, 30);

    printf("Elementos do vetor: ");
    imprimir_vetor(vetor);

    printf("Elemento na posição 1: %d\n", consultar_elemento(vetor, 1));

    remover_elemento(vetor, 1);
    printf("Elementos do vetor após remover o elemento na posição 1: ");
    imprimir_vetor(vetor);

    remover_vetor(vetor);

    return 0;
}
