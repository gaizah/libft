void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	while (s[i])
		f(&(s[i++]));
	while (*s)
		f(i++, &(*s++));
}
