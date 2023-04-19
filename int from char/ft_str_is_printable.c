//return 1 if printable

int ft_str_is_printable(char *str)
{
    int i = 0;
    while(str[i])
    {
        if (str[i] < 33 || str[i] > 126)
            return 0;
        i+=1;
    }
    return 1;
}
