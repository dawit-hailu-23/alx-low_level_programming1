#include "main.h"
#include <stdio.h>
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}
char *_test(char *s, char b, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        s[i] = b;
    }
    // s[2] = b;
    // printf("%x\n", s);
    // printf("0x%02x\n", s[95]);
    return s;
}
int main(void)
{
    char b[98] = {0x00};

    _test(b, 0x01, 95);
    // printf("0x%02x", b[96]);
    simple_print_buffer(b, 98);

    // simple_print_buffer();
    // printf("%0", b[9]);
}