int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    else
        return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
    printf ("dyalhoom = %c  dyali = %c",tolower('Z'),ft_tolower('Z'));
}
*/