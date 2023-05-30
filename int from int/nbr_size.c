//lenght of nbr

int nbr_size(int nbr)
{
    int i = 0;
    while(nbr > 0)
    {
        i++;
        nbr/=10;
    }
    return i;
}