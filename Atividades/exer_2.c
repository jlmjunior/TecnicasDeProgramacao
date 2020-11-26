/*
2) Escreva um programa em C com uma função para contar o número de vogais e consoantes em uma string usando um ponteiro.

Dados de teste:

Insira uma string: string

Resultado esperado:
Número de vogais: 1

Número de constante: 5
*/

#include <stdio.h>
#include <ctype.h>

void Contar(char *p)
{
    int countVogais = 0, countConsoantes = 0;

    while (*p != '\0')
    {
        char aux = toupper(*p);

        if (aux == 'A' || aux == 'E' || aux == 'I' || aux == 'O' || aux == 'U')
        {
            countVogais++;
        }
        else
        {
            countConsoantes++;
        }

        p++;
    }

    printf("Vogais: %d\n", countVogais);
    printf("Consoantes: %d", countConsoantes);
}

int main()
{
	char vetor[50] = "string\0";
	char *p = vetor;

	Contar(p);
}