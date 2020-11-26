/*
4) Pesquise um dos algoritmos de ordenação de vetores e implemente uma função que receba um ponteiro para um vetor de inteiros, ordene o mesmo e retorne ele ordenado para main().
*/

#include <stdio.h>

#define SIZE 10

void Ordenar(int *p)
{
    int temp;

    for (int i = 0; i < SIZE; i++)
    {
        int *pAux = p;

        for (int j = 0; j < SIZE - 1; j++)
        {
            int *aux = pAux;
            aux++;

            if (*pAux > *aux)
            {
                temp = *pAux;
                *pAux = *aux;
                *aux = temp;
            }

            pAux++;
        }
    }
}

int main()
{
    int vetor[SIZE] = { 20, 5, 14, 12, 11, 9, 1, 8, 32, 7 };
    int *p = vetor;

    Ordenar(p);

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\n", *p);

        p++;
    }
}