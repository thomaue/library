char hex_convert(int nb1)
{
    int i = 0;

    char hexabase[] = "0123456789abcdef";
    char current;

    if (nb1 > 16)
    {
        current = hexabase[nb1 / 16];
        write(1, &current, 1);
        write(1, "\n", 2);
        hex_convert(nb1 / 16);
    }
    else
    {
        current = hexabase[nb1];
        write(1, &current, 1);
        write(1, "\n", 2);
    }

    return (nb1);
}