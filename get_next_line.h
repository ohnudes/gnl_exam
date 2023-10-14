#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

char	*get_next_line(int fd);
// read_to_content
// create_line
char	*clean_content(char *content, char *eol);

// UTILS
size_t	ft_strlen(char *str);
char	*free_all(char *str);

#endif // !GET_NEXT_LINE_H
