#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

# define BUFFER_SIZE 1024

// GET_NEXT_LINE
char	*test_gnl(int fd);
char	*get_next_line(int fd);
char    *read_to_content(char *content, int fd);
char    *create_line(char *content);
char	*clean_content(char *content, char *eol);

// UTILS
size_t	ft_strlen(char *str);
char	*ft_strchr(char *str, char set);
char	*free_all(char *str);

#endif // !GET_NEXT_LINE_H
