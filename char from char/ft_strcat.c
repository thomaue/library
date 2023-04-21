//concatenate src in dest

char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int i2 = 0;

    while(dest[i])
        i+=1;
    while(src[i2])
    {
        dest[i] = src[i2];
        i+=1;
        i2+=1;
    }
    dest[i] = '\0';
    return dest;    
}