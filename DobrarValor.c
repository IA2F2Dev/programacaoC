#include <stdio.h>

int main()
{

    double n;
    int x;

    printf("Digite o número a ser Multiplicado: ");
    scanf("%lf", &n);
    printf("Digite quantas vezes número deve se Multiplicar: ");
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        n = n + n;
        printf("Resultado após %d iterações: %.2lf\n", i + 1, n);
    }


    return 0;
}
