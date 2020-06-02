#include <stdio.h>

int num_pies(int nb)
{
				int x;
				int v;

    if(nb)
    {
        x = nb/2;
        if(x)
    {
        v = (x/3);
    }
    }
    
    return (v);
}

int main() {
    int fruit;
    scanf("%d", &fruit);
    printf("%d",num_pies(fruit ));
    
    return 0;
}
