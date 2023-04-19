//return 1 if numeric

int ft_str_is_numeric(char *str)
{
    int i = 0;
    while(str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return 0;
        i+=1;
    }
    return 1;
}
