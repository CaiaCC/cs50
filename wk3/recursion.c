#include <cs50.h>
#include <stdio.h>

int draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

int draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }

    printf("\n");
    draw(n - 1);
}