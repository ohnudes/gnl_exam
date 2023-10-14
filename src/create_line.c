#include "../include/get_next_line.h"

char	*create_line(char *content)
{
	char    *aux;
	int     i;
	int		len;

	if (ft_strchr(content, '\n'))
		len = ft_strchr(content, '\n') - content + 1;
	else
		len = ft_strlen(content);
	aux = (char *) malloc (sizeof(char) * (len + 1));
	if (!aux)
		return (free_all(content));
	i = 0;
	while (content[i])
	{
		aux[i] = content[i];
		if (aux[i] == '\n')
		{
			aux[i + 1] = 0;
			return (aux);
		}
		i++;
	}
	return (aux);
}

/*
int	main(void)
{
	printf("%s\n", create_line("Hola esto es\nuna prueba"));
	return (0);
}
*/

