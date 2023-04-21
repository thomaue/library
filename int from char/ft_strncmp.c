//returns 0 if s1 and s2 are the same.
// 1 if s1 is greater or -1 if less
//same as strcmp but with n size

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i = 0;
    int i2 = 0;

    while(s2[i2])
        i2+=1;
    
    while(i < n)
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