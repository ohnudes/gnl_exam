
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

void	main_test(int fd)
{
	char		*txt;
	static char *content = {0};
	char		*line;
	char		*eol;

	if (fd < 0 || BUFFER_SIZE < 1)
		return ;
	eol = NULL;
	line = NULL;
	if (!content || !ft_strchr(content, '\0'))
		little_read(&txt, fd);
	if (content)
		{}// line = do_line(content, &eol);
	content = clean_content(content, eol);
	printf("whole txt: <%s>\nline: <%s>\nclean content: <%s>\n", txt, line, content);
	free(txt);
	free(line);
	free(content);
	return ;
}

static void	main_body(int fd)
{
	char	*str;

	fd = 0;
	str = get_next_line(fd);
	while (str)
	{
		printf("line:< %s>\n", str);
		free(str);
		str = get_next_line(fd);
	}
}

int	main(void)
{
	int		fd;

	fd = 0;
	fd = open("test.txt", O_RDONLY);
	//main_body(fd);
	//main_test(fd);
	close(fd);
	return (0);
}

