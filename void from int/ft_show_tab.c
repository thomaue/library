#include <unistd.h>

void ft_show_tab(int *tab)
{
    int i = 0;

    while(tab[i])
    {
        write(1 ,&tab[i], 1);
        i++;
    }
    write(1, "\n", 2);
}