#include <stdio.h>
/**
 * main - Entry point/
 *
 * Description: Program to print
 *
 * Return: 0 means (Success)
*/
int main(void)
{
	printf("Size of a char: %c byte(s)", sizeof(char));
	printf("Size of a int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long));
	printf("Size of a long long int: %llu byte(s)", sizeof(long long));
	printf("Size of a float: %f byte(s)", sizeof(float));
	return (0);
}
