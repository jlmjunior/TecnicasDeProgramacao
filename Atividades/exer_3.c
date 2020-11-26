/*
3) Escreva uma função chamada AdicionaDois(). Ela receberá três ponteiros para floats. Ela adicionará os números apontados pelos dois primeiros e armazenará sua soma no local apontado pelo terceiro ponteiro. Em main(), defina três variáveis float j, k e m. Informe j e k, envie seus endereços para AdicionaDois() e faça com que main() imprima o endereço de m e seu valor que veio dele de AdicionaDois().
*/

#include <stdio.h>

void AdicionaDois(float *pA, float *pB, float *pC)
{
    *pC = *pB + *pA;
}

int main()
{
    float j = 20, k = 12, m;

    AdicionaDois(&j, &k, &m);

    printf("%.2f\n", m);
    printf("%.p", &m);
}