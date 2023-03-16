#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always  0 (Success)
*/
int main(void)
{
        printf("size of a char: %u byte(s)\n", (unsigned long)sizeof(char));
        printf("size of an int: %u byte(s)\n", (unsigned long)sizeof(int));
        printf("size of a long int: %u byte(s)\n", (unsigned long)sizeof(long int));
        printf("size of a long long int: %u byte(s)\n", (unsigned long)sizeof(long long int));
        printf("size of a float: %u byte(s)\n", (unsigned long)sizeof(float));
        return (0);
}
