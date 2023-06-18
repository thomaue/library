int nb_words(char *para)
{
    int i = 0;
    int trap = 0;

    int nb = 0;

    while(para[i])
    {
        if(para[i] != ' ' && para[i] != '\t' && para[i] != '\0')
        {
            if(nb == 0 || trap == 0)
            {
                nb++;
                trap++;
            }
        }

        else
        {
            trap = 0;
        }
        i++;
    }

    return nb;
}