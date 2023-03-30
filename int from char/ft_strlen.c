//size of str

int ft_strlen(char *str)
{
    int i=0;
    while(str[i])
        i+=1;
    return i;
}