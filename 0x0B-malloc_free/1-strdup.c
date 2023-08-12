#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated
*space in memor of the
*string given as a parameter.
*@str:String to be copied
*
*Return: NULL in case of error, pointer to allocated
*space
*/
char *_strdup(char *str)
{
        int size = 0;
        char *arr;
        int i;

        if (str == NULL)
                return (NULL);
        while (str[size] != '\0')
                size++;
        arr = malloc(size * sizeof(char) + 1);
        if (arr == NULL)
                return (NULL);
        for (i = 0; i < size; i++)
                arr[i] = str[i];
        arr[size] = '\0';
        return (arr);
}

