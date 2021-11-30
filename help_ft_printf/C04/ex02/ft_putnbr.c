#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_long(int nb)
{
	int	temp;
	int	size;

	size = 1;
	temp = nb;
	while ((temp / 10) > 0)
	{
		temp /= 10;
		size *= 10;
	}
	temp = nb;
	while (size > 0)
	{
		ft_putchar((temp / size) + '0');
		temp = temp % size;
		size /= 10;
	}
}

void	ft_putnbr(int	nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = -147483648;
		}
		nb = nb * (-1);
	}
	if (nb < 10)
	{	
		if (nb == 0)
		{
			ft_putchar('0');
		}
		else
			ft_putchar(nb + '0');
	}
	if (nb >= 10)
		ft_print_long(nb);
}
