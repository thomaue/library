char *upfirst(char *para)
{
    int i = 0;

    while(para[i])
    {
        if(para[i] >= 97 && para[i] <= 122)
        {
            if(i == 0 || para[i-1] == ' ' || para[i-1] == '\t')
                para[i] -=32;
        }

        else if(para[i] >= 65 && para[i] <= 90)
        {
            if(para[i-1] != ' ' && para[i-1] != '\t' && i > 0)
                para[i] +=32;
        }
        i++;
    }
    return para;
}