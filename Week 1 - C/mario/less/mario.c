#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int brinks);

int main(void)
{
    int Height;
    do
    {
        Height = get_int("Height: ");
    }
    while (Height < 1);

    for (int i = 0; i < Height; i++)
    {
        print_row(Height - (i + 1), i + 1);
    }
}

void print_row(int spaces, int brinks)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
    for (int j = 0; j < brinks; j++)
    {
        printf("#");
    }
    printf("\n");
}
