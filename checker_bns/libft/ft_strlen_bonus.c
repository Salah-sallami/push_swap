#include "libft.h"

size_t ft_strlen(const char *s1)
{
	size_t len;

	len = 0;
	while (s1[len])
		len++;
	return (len);
}