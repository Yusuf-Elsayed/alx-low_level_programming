#include <stdio.h>

/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
int main(void) 
{
    char i;
    for (i = 'a'; i < 'z'; ++i) {
        putchar(97 + i);
    }
    putchar('\n');

    return (0);
}
