#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to print
 * @f: funtion
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
    f(name);
}

void print_with_hello(char *name)
{
    printf("Hello, %s!\n", name);
}

int main()
{
    char name[] = "John";
    print_name(name, print_with_hello);

    return 0;
}
