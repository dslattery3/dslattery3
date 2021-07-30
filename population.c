#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int y = 0;
    // TODO: Prompt for start size
    int p;
    do
    {
        p = get_int("Enter number of llamas to start: ");
    }
    while (p < 9);
    // TODO: Prompt for end size
    int fp;
    do
    {
        fp = get_int("Enter desired number of llamas: ");
    }
    while (fp < p);
    // TODO: Calculate number of years until we reach threshold
    // if fp is larger loop continues
    // have a counter for y
    // 
    // fp = ((4/3)sp - (1/4) sp)*y
    // fp = (((16/12) - (3/12))sp)y
    // fp = ((13/12)sp)y
    // y = (12fp)/(13sp)
    while (p < fp)
    {
        p = p + ((p/3) - (p/4));
        y++;
    }
    // TODO: Print number of years
    printf("Years: %i\n", y);
}
