//if the int is prime returns 1, otherwise 0

int ft_is_prime(int nb)
{
    int i;
    i=3;
    
    if(nb%2==0)
        return 0;
    while(i<nb)
    {
        if(nb%i==0)
            return 0;
        i+=1;
    }
    return 1;
}