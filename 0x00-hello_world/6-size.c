#include <stdio.h>
/**
 *main - entry point
 *Return:  always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	print("Size of the int: %d  byte(s)", sizeof(int));
	printf("Size of long int: %lu byte(s)", sizeof(long int));
	printf("Size of long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of float: %lu byte(s)", sizeof(float));
		return (0);
}
