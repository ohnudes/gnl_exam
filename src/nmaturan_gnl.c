#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>

/* prototipo para testear:
* 1. prototipo de read: read de todo el txt en un solo str.
* 2. do_line devuelve hasta primer salto de linea
* 3. clean_content devuelve el resto de la linea
* 4. complete str hace un duplicado despues del read con todo el .txt.
*/

char	*little_read(char **txt, int fd)
{
	char	*content;
	char	*tmp;
	int		rbytes;

	tmp = NULL;
	rbytes = 0;
	tmp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	*txt = tmp; // ATENTI! no hacer free en clean_content para mantener el txt vivo!
	if (!tmp)
		return (NULL);
	tmp[BUFFER_SIZE] = '\0';
	rbytes = read(0, tmp, BUFFER_SIZE);
	if (rbytes == -1)
		return (NULL);
	return (tmp);
}

char	*mini_gnl(int fd)
{
	char		*txt;
	static char *content = {0};
	char		*line;
	char		*eol;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
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
	return (line);
}

// prototipo de main
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
	{}// line = do_line(content, &eol);
	content = clean_content(content, eol);
	return (line);
}

