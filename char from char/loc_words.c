#include <stdio.h>

char **loc_words(char *para)
{
    int i = 0;
    int i2 = 0;

    int stock_size = 0;
    int stock_pos = 0;

    int tab_i = 0;

    //---------------------------------//

    char **tab_words = (char **)malloc(sizeof(char *) * nb_words(para) + 1);

    //---------------------------------//

    if(i == 0 && para[i] == ' ' || i == 0 && para[i] == '\t')
    {
        while(para[i] == ' ' || para[i] == '\t')
            i++;
    }

    else
    {
        while(para[i])
        {
            if(tab_i == nb_words(para) - 1)
                tab_words[tab_i] = NULL;

        //---------------------------------//

            stock_size = size_word(para, i);
            stock_pos = i;

        //---------------------------------//

            tab_words[tab_i] = (char *)malloc(sizeof(char) * (stock_size + 1));

            while(i < stock_pos + stock_size)
            {
                tab_words[tab_i][i2] = para[i];
                i2++;
                i++;
            }
            tab_words[tab_i][i2] = '\0';

        //---------------------------------//

            tab_i++;

        //---------------------------------//

            i2 = 0;
            while (para[i] && (para[i] == ' ' || para[i] == '\t'))
                    i++;
        }
    }
    return tab_words;
}