#include <ctype.h>
#include <stdio.h> 

int ft_isalpha(int c);

int main (void)
{
    printf ("~~~~~~~~~~~~~~~~~~~~\n");
    printf ("ISALPHA:\n");
    printf ("~~~~~~~~~~~~~~~~~~~~\n");
    printf( "%d\n", isalpha(101));
    printf( "%d\n\n", ft_isalpha(101));
    printf( "%d\n", isalpha(106));
    printf( "%d\n\n", ft_isalpha(106));
    printf( "%d\n", isalpha(113));
    printf( "%d\n\n", ft_isalpha(113));
    printf( "%d\n", isalpha(64));
    printf( "%d\n\n", ft_isalpha(64));
    printf( "%d\n", isalpha(32));
    printf( "%d\n", ft_isalpha(32));
    printf ("~~~~~~~~~~~~~~~~~~~~\n\n");
    return (0);
}