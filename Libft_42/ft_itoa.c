#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	int	i;
	void	*temp;
	
	i = 0;
	while (ft_isalnum(n))
	{
		temp = malloc((char)n + 48) + 1 ;
		i++;
	}
	return (temp[i]);		
}

int	main(int ac, char**av)
{
	if (ac == 2)
	{
		printf("%s\n", ft_itoa(123));
	}
	return (0);
}
