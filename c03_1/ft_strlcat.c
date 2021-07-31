unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	total_len;

	i = 0;
	src_len = 0;
	dest_len = 0;
	total_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (dest[dest_len] != '\0')
		dest_len++;
	total_len = src_len + dest_len;
	if (size > dest_len)
	{
		while (dest_len < size - 1 && src[i] != '\0')
			dest[dest_len++] = src[i++];
		dest[dest_len] = '\0';
		return (total_len);
	}
	return (src_len + size);
}
