char *ft_strcapitalize(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i-1] == ' ' || str[i-1] == '\t' || i == 0 && str[i] > 97 && str[i] < 122)
        {
            str[i] -= 32;
        }

        i+=1;
    }
    return str;
}