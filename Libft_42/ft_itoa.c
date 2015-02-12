#include "libft.h"

size_t	ft_len(int n)
{
	size_t j;

	j = 0;
	while (n != 0)
	{
		j++;
		n /= 10;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	char	*temp;
	int	nbr;
	int	neg;

	neg = 0;
	nbr = ft_len(n);
	if (n < 0)
	{
		neg = 1;
		n *= -1;
	}
	temp = ft_strnew(nbr + neg);
	if (neg == 0)
		nbr--;
	if (temp == NULL)
		return (NULL);
	while (n > 0)
	{
		temp[nbr] = (n % 10) + 48;
		nbr--;
		n /= 10;
	}
	if (neg > 0)
		temp[0] = '-';
	return (temp);
}
