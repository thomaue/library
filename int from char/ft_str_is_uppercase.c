// return 1 if uppercase

int ft_str_is_uppercase(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] < 'A' || str[i] > 'Z')
            return 0;
        i+=1;
    }
    return 1;
}
