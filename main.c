
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*str;

	fd = 0;
	fd = open("test.txt", O_RDONLY);
	str = get_next_line(fd);
	while (str)
	{
		printf("line:< %s>\n", str);
		free(str);
		str = get_next_line(fd);
	}
	close(fd);
	return (0);
}
