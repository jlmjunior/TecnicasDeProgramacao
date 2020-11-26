/*
1) Escreva um programa em C com uma função que encontre o maior elemento de um array criado usando a Alocação de Memória Dinâmica (ou seja, tem de passar o ponteiro do vetor para a função).
Dados de teste:
Insira o número total de elementos (1 a 100): 5
Número 1: 5
Número 2: 7
Número 3: 2
Número 4: 9
Número 5: 8
Resultado esperado:
O maior elemento é: 9
*/

#include <stdio.h>

#define SIZE 100

int BuscaMaior(int *p)
{
    int maior = *p;

    for (int i = 0; i < SIZE; i++)
    {
        if (*p > maior)
        {
            maior = *p;
        }

        p++;
    }

    return maior;
}

int main()
{
    int vetor[SIZE] = { 5, 7, 2, 9, 8 };
    int *p = vetor;

    printf("Maior elemento: %d", BuscaMaior(p));
}
