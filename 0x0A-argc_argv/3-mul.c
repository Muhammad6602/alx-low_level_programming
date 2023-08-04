#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    int x, y;

    if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
    {
        printf("Error: Invalid input. Please provide valid numbers.\n");
        return 1;
    }

    x = atoi(argv[1]);
    y = atoi(argv[2]);
    printf("%d\n", x * y);

    return 0;
}

// Helper function to check if a string is a valid number
bool is_valid_number(const char *str)
{
    char *endptr;
    strtol(str, &endptr, 10);
    return *endptr == '\0';
}
