void ft_switch(int *nombre1, int *nombre2)
{
    int temp = 0;

    temp = *nombre1;
    *nombre1 = *nombre2;
    *nombre2 = temp;
}