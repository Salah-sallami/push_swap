#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *p;
	int i;

	p = malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}