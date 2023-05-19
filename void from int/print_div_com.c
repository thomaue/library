void print_div_com(int nb1, int nb2)
{
    int div_com = 1;
    int return_div = 0;

    while(div_com <= nb1 || div_com <= nb2)
    {
        if(nb1 % div_com == 0 && nb2 % div_com == 0)
            return_div = div_com;
        div_com++;
    }
    printf("return div : %d\n", return_div);
}