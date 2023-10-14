#include "get_next_line.h"

/* Function receives the content string and creates a
 * substring from eol + 1 to the end of content.
*/

char	*clean_content(char *content, char *eol)
{
	char	*new_cnt;
	char	*start;
	size_t	new_len;

	if (!*(eol + 1))
		return (NULL);
	start = eol + 1;
	new_len = 0;
	new_len = ft_strlen(start);
	new_cnt = NULL;
	new_cnt = malloc(sizeof(char) * (new_len + 1));
	new_cnt[new_len] = '\0';
	while (start && *start)
	{
		*new_cnt = *start;
		new_cnt++;
		start++;
	}
	free (content);
	return (new_cnt);
}
