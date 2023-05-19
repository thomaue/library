char *last_c(char *arg)
{
    int i = 0;
    while(arg[i])
        i++;
    i-=1;

    while(i > 0)
    {
        if(arg[i] >= 97 && arg[i] <= 122)
        {
            if (arg[i+1] == '\t' || arg[i+1] == ' ' || arg[i+1] == '\0')
                arg[i] -= 32;
            i--;
        }


        else if(arg[i] >= 65 && arg[i] <= 90)
        {
            if (arg[i+1] != '\t' || arg[i+1] != ' ' || arg[i+1] != '\0')
                arg[i] +=32;
            i--;
        }

        else
            i--;
    }
    print_arg(arg);
    return arg;
}