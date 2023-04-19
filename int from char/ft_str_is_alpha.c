//return 1 if str is full of alpha else 0

int ft_str_is_alpha(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] < 'A' || str[i] > 'Z' && str[i] < 'a' || str[i] > 'z')
            return 0;
        i+=1;
    }
    return 1;
}

