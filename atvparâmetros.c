#include <stdio.h>

int imprimir_varios(int quantidade)
{
    while (quantidade)
    {
    printf("Adoro programar\n");
    --quantidade;
    }
    printf("o valor de quantidade é: %i\n", quantidade);
}

int main()
{
    int x;
    scanf("%i", &x);
    imprimir_varios(x);
    printf("Ovalor de X é de %i\n", x);
    return 0;
}
