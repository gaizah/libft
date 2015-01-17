#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int i;
	int len;
	char *temp;;

	i = 0;
	len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	temp = ft_strnew(len);
	while (s[i])
	{
		temp[i] = f(s[i]);
		i++;
	}	
	temp[i] = '\0';
	return (temp);
}
