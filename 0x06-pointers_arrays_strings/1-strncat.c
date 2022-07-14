/**
 * _strncpy - Copy's string
 * @dest: destination string
 * @src: sting to copy
 * @n: the point to copy the string
 *
 * Retutn: the copyed string
 */
char *_strncat(char *dest, char *src, int n)
{
    int i, j;

    i = 0;
    j = 0;

    while (dest[i] != '\0')
        i++;

    while (src[j] != '\0' && j < n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return (dest);
}