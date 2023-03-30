//check that all the elements of str are in base. 

//return 1 if good or 0 if error

int str_in_base(char *str, char *base)
{
    int i=0;
    int i2=0;
    int flag=0;

    while(str[i]!='\0')
    {
        i2=0;
        while(base[i2])
        {
            if (base[i2] == str[i])
            {
                flag+=1;
                i+=1;
                break;
            }

            else if (base[i2 + 1]=='\0')
            {
                return 0;
            }
            i2+=1;
        }
    }
    if (flag == i)
    return 1;

    return 0;
}