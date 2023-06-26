#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the first character.
 * @str: Pointer to the string.
 */
void puts2(char *str)
{
    if (str != NULL)
    {
        int i = 0;

        while (str[i] != '\0')
        {
            putchar(str[i]);

            i++;

            if (str[i] != '\0')
                i++;
        }
    }

    putchar('\n');
}

