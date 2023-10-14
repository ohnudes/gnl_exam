#include "../include/get_next_line.h"

char *get_next_line(int fd)
{
	static char *content = NULL;
	char 		*line;

	if (!content || !ft_strchr(content, '\n'))
	{
		content = read_to_content(fd);
		if (!content)
			return (free_all(content));
	}
	line = create_line(content);
	if (!line)
		return (free_all(content));
	content = clear_content(content, ft_strchr(content, '\n'));
}
