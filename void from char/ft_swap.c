void    ft_swap(char *a, char *b)
{
    char temp;

    temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}