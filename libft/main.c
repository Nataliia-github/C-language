#include <ctype.h>
#include <stdio.h> 

int	ft_isalpha(int c);
int	ft_isdigit(int c);

int	main(void)
{
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("ISALPHA:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n");
	printf ("%d\n", isalpha(101));
	printf ("%d\n\n", ft_isalpha(101));
	printf ("%d\n", isalpha(106));
	printf ("%d\n\n", ft_isalpha(106));
	printf ("%d\n", isalpha(113));
	printf ("%d\n\n", ft_isalpha(113));
	printf ("%d\n", isalpha(64));
	printf ("%d\n\n", ft_isalpha(64));
	printf ("%d\n", isalpha(32));
	printf ("%d\n", ft_isalpha(32));
	printf ("\n~~~~~~~~~~~~~~~~~~~~\n");
	printf ("ISDIGIT:\n");
	printf ("~~~~~~~~~~~~~~~~~~~~\n");
	printf ("%d\n", isdigit(47));
	printf ("%d\n\n", ft_isdigit(47));
	printf ("%d\n", isdigit(48));
	printf ("%d\n\n", ft_isdigit(48));
	printf ("%d\n", isdigit(49));
	printf ("%d\n\n", ft_isdigit(49));
	printf ("%d\n", isdigit(50));
	printf ("%d\n\n", ft_isdigit(50));
	printf ("%d\n", isdigit(55));
	printf ("%d\n\n", ft_isdigit(55));
	printf ("%d\n", isdigit(57));
	printf ("%d\n\n", ft_isdigit(57));
	printf ("%d\n", isdigit(59));
	printf ("%d\n\n", ft_isdigit(59));
	printf ("%d\n", isdigit(113));
	printf ("%d\n\n", ft_isdigit(113));
	printf ("~~~~~~~~~~~~~~~~~~~~\n\n");
	return (0);
}
