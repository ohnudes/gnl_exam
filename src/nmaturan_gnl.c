
#include "get_next_line.h"

char	*test_gnl(int fd)
{
	static char *content = {0};
	char		*line;
	char		*eol;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	eol = NULL;
	line = NULL;
	if (!content || !ft_strchr(content, '\0'))
	{}// content = read_to_content(content, &eol)
	if (content)
	{}// line = create_line(content, &eol);
	content = clean_content(content, eol);
	return (line);
}
