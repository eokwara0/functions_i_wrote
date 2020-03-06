#include <stdio.h>
#include <stdlib.h>

void print_prime_numbers(int n)
{
    int x;
    int w;
    
    x = 0;
    w = 2;
 printf("%d ",w);
    while(x  < n)
    {
    if (x == 1)
    {
        ++x;
    }
    else if (x == 3)
    {
        printf("%d ",x);
    }
     else if(x%2 != 0 && x%3 != 0)
       {
        printf("%d ",x);
       }
        //printf("\n");
        ++x;
    }
}

int main()
{
    int num;
    scanf("%d",&num);
    print_prime_numbers(num);
    return 0;
}