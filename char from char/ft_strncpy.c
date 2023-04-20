//returns n elements of src

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = 0;

    while (i < n)
    {   
        dest[i] = src[i];
        i+=1;
    }
    dest[i] = '\0';
    return dest;
}