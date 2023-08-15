/**
 * main - Entry point of the program.
 *
 * This function demonstrates the usage of a custom '_putchar' function by
 * printing a string using the 'printf' function. The '_putchar' function is
 * expected to be defined elsewhere in the code and should handle printing
 * individual characters.
 *
 * Return: Always 0 to indicate successful completion of the program.
 */

int main(void)
{
	char a[] = "_putchar\n";

	for (int i = 0; i < 9; i++)
	{
		_putchar(a[i]);
	}
	return (0);
}
