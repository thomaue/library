//return 1 if lowercase

int ft_str_is_lowercase(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] < 'a' || str[i] > 'z')
            return 0;
        i+=1;
    }
    return 1;
}