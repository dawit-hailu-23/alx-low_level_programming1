/**
 * _strcmp - Compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: postive if s1 greater if s1 less than 0 return negative
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 == *s2)
    {
        if (*s1 == '\0')
        {
            return (0);
        }
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}