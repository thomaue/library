#include <stdio.h>


char **tab_words(char *para, int size_1d)
{
    int i = 0;

    int i2 = 0;
    int i3 = 0;

    int cur_word_size = 0;
    int cur_posit = 0;

    //-----------1d_tab----------------//

    char **tab = (char **)malloc(sizeof(char *) * size_1d);
    if(tab == NULL)
        return NULL;

    //---------------------------------//

    while(para[i])
        i++;
    i-=1;

    //--------word_size----------------//

    while(i >= 0)
    {
        while(para[i] >= '!' && para[i] <= '~')
        {
            cur_word_size++;
            i--;
        }

    //---------------------------------//

        cur_posit = i;

    //-----------2d_tab----------------//

        tab[i2] = (char *)malloc(sizeof(char) * cur_word_size);
        if(tab == NULL)
            return NULL;

    //------------copy-----------------//

        while(i++ <= cur_posit + cur_word_size)
        {
            tab[i2][i3] = para[i];
            i3++;
        }

    //---------------------------------//

        i = cur_posit - 1;
        cur_word_size=0;
        i2++;
        i3=0;
    }

    //---------------------------------//

    return tab;
}