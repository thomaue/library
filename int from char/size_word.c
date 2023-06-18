int size_word(char *para, int position)
{
    int size = 0;

    while(para[position] >= '!' && para[position] <= '~')
    {
        size++;
        position++;
    }
    return size;
}