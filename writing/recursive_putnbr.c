#include <unistd.h>

//write a int

void ft_putnbr(int nb)
{
    int i;
    unsigned int nbr;
    char num[10]="0123456789";
    i=0;

    if (nb<0)
    {
        write(1,"-",1);
        nb*=-1;
    }

    if (nb<10&&nb>=0)
        write(1,&num[nb], 1);

    else
    {
        i=nb; 
        i=i/10;
        ft_putnbr(nb/10);
        i=i%10;
		ft_putnbr(nb%10);
    }
}