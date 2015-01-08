/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeckers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 23:37:48 by ldeckers          #+#    #+#             */
/*   Updated: 2015/01/08 20:13:35 by ldeckers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	int i;
	int j;
	int len;
	char *temp;

	i = 0;
	j = 0;
	len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	while (s[i] == '\n' || s[i] == '\t' || s[i] == ' ' && s[i] != '\0')
		i++;
	while  (s[len] != ' ' || s[len] != '\n' || s[len] != '\t')
		len--;
	temp = ft_strsub(s, j, (j - len));
	return (temp);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%s\n", ft_strtrim(av[1]));
	}
	return (0);
}
