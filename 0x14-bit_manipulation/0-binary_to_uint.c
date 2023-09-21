/**
 * binary_to_uint - converts a binary to an unsigned int
 * @bin: the binary number as a string
 *
 * Return: the converted value
 */
unsigned int binary_to_uint(const char *bin)
{
    unsigned int deci = 0;
    int str_len = 0, base = 1;

    if (!check_valid(bin))
        return (0);

    while (bin[str_len] != '\0')
        str_len++;

    while (str_len)
    {
        deci += ((bin[str_len - 1] - '0') * base);
        base *= 2;
        str_len--;
    }
    return (deci);
}

/**
 * check_valid_string - checks if a string has only 0's and 1's
 * @bin: string to be checked
 *
 * Return: 1 if string is valid, 0 otherwise
 */
int check_valid(const char *bin)
{
    if (bin == NULL)
        return (0);

    while (*bin)
    {
        if (*bin != '1' && *bin != '0')
            return (0);
        bin++;
    }
    return (1);
}
