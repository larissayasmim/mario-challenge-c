#include<cs50.h>
#include<stdio.h>

int main(void)
{
    // User question
    int h;
    do
    {
        h = get_int("height: ");
    }
    while (h < 1 || h > 8);

    // Number of rows and columns
    for (int r = 0; r < h; r++)
    {
        for (int c = 0; c < h+r+3; c++)
        {

            // Condition to print space or hashes
            if (c == h || c == h+1 || r + c < h-1)
                printf(" ");
            else
            printf("#");
        }
             printf("\n");
    }

}