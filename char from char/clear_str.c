#include <stdlib.h>

//returns only the characters contained in str. 
//ignores whitespaces and +/-
//needs to be free

char *clear_nbr(char *str)
{
    int i=0;
    int i2=0;
    int size=0;
    while(str[i2])
    {
        if (str[i2] >= 48 && str[i2] <= 122)
            size+=1;
        i2+=1;
    }
    i2=0;
    char *newstr = (char *)malloc(sizeof(char) * size);
    
    while (str[i])
    {
        if(str[i] == ' ' || str[i] == '\t' || str[i] == '+' || str[i] == '-')
        {
            i+=1;
        }
        else if (str[i] >= 48 && str[i] <= 122)
        {
            while(str[i] >= 48 && str[i] <= 122)
            {
                newstr[i2] = str[i];
                i+=1;
                i2+=1; 
            }
            break;
        }
        else
        {
            return 0;
        }
    }
    return newstr;
}