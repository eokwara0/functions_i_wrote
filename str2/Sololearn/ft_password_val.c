#include <stdio.h>
#include<unistd.h>


char is_num(char c)// checks for number characters.
{
    if (c >= '0' && c <= '9')
    return c;
    
    return c;
}
void ft_password_val(char *str)//pass_validator
{
    int x;
    
    int y;
    int q;
    x = 0;
    y = 0;
     q = 0;
    
    while(str[x] != '\0')
    {
     
        if (str[x] == '@' ||str[x] == '$' || str[x] == '&'|| str[x] == '!' || str[x] == '*' || str[x] == '#' || str[x] == '%')// checks for unique characters
        {
            ++y;
        }
        if (is_num (str[x]))
        {
        ++q;
        }
        ++x;
    }
    
    if (q >= 2 && y >=2 && x >= 7)
    {
        write(1,"This Password is Strong\n",23);
    }
    else
    write(1,"This Password is Weak\n",22);
    
    
}
int main(void) 
{

char c [19];

scanf("%s",c);

ft_password_val (c);
    return 0;
}
