//print non-printable characters in hex

#include <unistd.h>

void ft_putstr_non_printable(char *str)
{
    int i = 0;
    int i2 = 0;
    int u = 0;
    int d = 0;

    char hexa[16] = {'0' , '1' , '2' , '3' , '4' , '5', '6', '7', '8', '9', 'a' , 'b' , 'c', 'd', 'e' ,'f'};

    while (str[i])
    {
        if (str[i] >= 32 && str[i] <= 127)
        {
            write(1 , &str[i] , 1);
        }

        else 
        {
            write(1 , "\\" , 1);
            while (i2 != str[i])
            {
                if (i == 16)
                {
                    u = 0;
                    d + 1;
                }
            i2++;
            u++;
            }
            write(1, &hexa[d] , 1);
            write(1, &hexa[u] , 1);
        }
    i++;
    }

}

// int main(void)
// {
//     char str[] = {'k' , 'e' , 's' , 'a', '\n'};

//     ft_putstr_non_printable(str); 

//     return 0;
// }