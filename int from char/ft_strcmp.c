//compare two chains 

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    int i2 = 0;

    while(s2[i2])
        i2+=1;
    
    while(s1[i])
    {
        if (s1[i] == s2[i])
            i+=1;
        
        else if (s1[i] > s2[i])
            return 1;

        else
            return -1;
    }
    return 0;
}