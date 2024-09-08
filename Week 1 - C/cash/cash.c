#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int count = 0;
    int cash = get_int("Change owed: ");
    while (cash != 0)
    {
        if (cash >= 25)
        {
            cash = cash - 25;
            count += 1;
        }
        else if (cash >= 10)
        {
            cash = cash - 10;
            count += 1;
        }
        else if (cash >= 5)
        {
            cash = cash - 5;
            count += 1;
        }
        else if (cash >= 1)
        {
            cash = cash - 1;
            count += 1;
        }
    }
    printf("%i\n", count);
}
