// copy src to dest and return its length

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i = 0;

    while(i < size - 1)
    {
        dest[i] = src[i];
        i+=1;
    }
    dest[i] = '\0';

    return i;
}