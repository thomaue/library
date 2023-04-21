//return to_find in str if it finds it, otherwise 0

char *ft_strstr(char *str, char *to_find)
{
   int i = 0;
   int i2 = 0;
   
   while(str[i])
   {
        i2 = 0;
        while(str[i + i2] == to_find[i2])
        {
            i2+=1;
            if(to_find[i2] == '\0')
            {
                return str + i;
            }
        }
        i+=1;
   }
   return 0;
}
