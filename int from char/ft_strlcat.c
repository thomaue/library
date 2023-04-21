//concatenates n src characters into dest

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int i = 0;
    int i2 = 0;

    while(i < size)
    {
        if(dest[i] == '\0')
            break;
        i+=1;
    }

    while(i < size)
    {
        dest[i] = src[i2];
        i+=1;
        i2+=1;
    }
    return i;
}