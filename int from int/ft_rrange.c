#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
    int *tab;
    int current = end;

    int i = 0;

    if(start > end)
        tab = (int *)malloc(sizeof(int) * (start - end) + 1);

    else if(start == end)
    {
        tab = (int *)malloc(sizeof(int) * 1);
        tab[0] = end;
        return tab;
    }  
    else
        tab = (int *)malloc(sizeof(int) * (end - start) + 1);

    if(tab == NULL)
        return NULL;

    if(end < start)
    {
        while(end <= start)
            tab[i++] = end++;
    }
    else if(end > start)
    {
        while(end >= start)
            tab[i++] = end--;
    }
    return tab;
}