#include <unistd.h>

//returns the size of the base, or 0 in case of error

int checkbase(char *base)
{
    int sizebase=0;
    int duplicate=sizebase+1;

    while(base[sizebase])
    {
        while(base[duplicate])
        {
            if(base[sizebase]==base[duplicate])
            {
                write(1,"same char in base\n",19);
                return 0;
            }
            duplicate+=1;
        }
        if(base[sizebase]==' '||base[sizebase]=='\t'||base[sizebase]=='+'||base[sizebase]=='-')
        {
            write(1,"symbol or space in the base\n",29);
            return 0;
        }
        sizebase++;
        duplicate=sizebase+1;
    }
    return sizebase;
}