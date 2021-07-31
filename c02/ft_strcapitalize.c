void	capitalize(char *str, int i, int aux)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		if (str[aux] >= '0' && str[aux] <= '9')
			str[i] = str[i];
		else if (str[aux] >= 'A' && str[aux] <= 'Z')
			str[i] = str[i];
		else if (str[aux] >= 'a' && str[aux] <= 'z')
			str[i] = str[i];
		else
			str[i] = str[i] - 32;
	}
	else if (str[i] >= 'A' && str[i] <= 'Z')
	{
		if (str[aux] >= '0' && str[aux] <= '9')
			str[i] = str[i] + 32;
		else if (str[aux] >= 'A' && str[aux] <= 'Z')
			str[i] = str[i] + 32;
		else if (str[aux] >= 'a' && str[aux] <= 'z')
			str[i] = str[i] + 32;
		else
			str[i] = str[i];
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	aux;

	i = 0;
	while (str[i] != '\0')
	{
		aux = i - 1;
		capitalize(str, i, aux);
		i++;
	}
	return (str);
}
