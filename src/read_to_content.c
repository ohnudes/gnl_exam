#include "../include/get_next_line.h"

char    *read_to_content(char *content, int fd)
{
	char	*buff[BUFFER_SIZE + 1];
	int		b_read;
	char	*aux;

	b_read = 1;
	while (b_read && !ft_strchr(content, '\n'))
	{
		b_read = read(fd, buff, BUFFER_SIZE);
		if (b_read < 1)
			return (free_all(content));
		buff[b_read] = 0;
		aux = content;
		content = ft_strjoin(aux, buff);
		if (!content)
			return (free_all);
		free(aux);
	}
	return (content);
}