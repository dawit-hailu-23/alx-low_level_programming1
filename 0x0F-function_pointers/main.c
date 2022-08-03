#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
int is_98(int elem)
{
    return (98 == elem);
}
int is_strictly_positive(int elem)
{
    return (elem > 0);
}
int abs_is_98(int elem)
{
    return (elem == 98 || -elem == 98);
}
void print_name_uppercase(char *name)
{
    unsigned int i;

    printf("Hello, my uppercase name is ");
    i = 0;
    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            putchar(name[i] + 'A' - 'a');
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
}
void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}
void print_elem(int elem)
{
    printf("%d\n", elem);
}
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}
int main()
{
	 int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, &print_elem);
    array_iterator(array, 5, &print_elem_hex);
}
