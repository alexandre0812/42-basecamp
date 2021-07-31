int	ft_str_is_numeric(char *str)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			result = 0;
		i++;
	}	
	return (result);
}
