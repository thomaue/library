//return the integers in a string
//light version

int mini_atoi(char *str)
{
    int i=0;
    int num=0;

    while(str[i])
    {
        num=(num*10)+str[i]-48;
        i+=1;
    }
    return num;
}