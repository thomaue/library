void print_arg(char *arg)
{
    int i;
    for(i = 0; arg[i]; i++)
        write(1, &arg[i], 1);
    write(1, "\n", 2);
}