/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeckers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 20:35:36 by ldeckers          #+#    #+#             */
/*   Updated: 2015/02/12 16:11:22 by ldeckers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbr(char *s, char c)
{
	int i;
	int nbr;

	i = 0;
	nbr = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			nbr++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (nbr);
}



char	**ft_strsplit(char const *s, char c)
{
		int i;
		int j;
		int word;
		char *temp;
		char ** tab;
		
		i = 0;
		j = 0;
		word = ft_nbr((char*)s, c);
		if (!(tab = (char**)malloc(sizeof(char*) *  word + 1)))
			return (NULL);
		while (s[i] != '\0' && s[i] == c)
		{
			if (s[i] != c)
			{
				*temp = s[i];
				temp++;
			}
			if (s[i - 1] != c && s[i] == c)
			{
				temp[i] = '\0';
				tab[j] = temp;
				j++;
			}
			i++;
		}
		return (tab);
}
