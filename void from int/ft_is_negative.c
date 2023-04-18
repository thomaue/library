#include <unistd.h>

void		ft_is_negative(int nb)
{
    if(nb >= 0)
        write(1, "\t+\n", 4);
    else
        write(1, "\t-\n", 4);
}