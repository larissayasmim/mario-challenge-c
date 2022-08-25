#include<cs50.h>
#include<stdio.h>

int main(void)
{
    //Pedir altura ao usuário
    int n;
    do
    {
        n = get_int("height: ");
    }
    while (n < 1 || n > 8);

    //Quantidade de linhas e colunas sendo i=rows e j=columns
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n+i+3; j++)
        {

            //Condição para imprimir espaço ou hashes
            if (j == n || j == n+1 || i + j < n-1)
                printf(" ");
            else
            printf("#");
        }
             printf("\n");
    }

}
