
#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;
	
	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *str, char set)
{
	if (!str)
		return (NULL);
	while (*str && *str != set)
		str++;
	if (*str == set)
		return (str);
	return (NULL);
}
