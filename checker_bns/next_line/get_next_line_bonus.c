/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 21:48:52 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/12 17:53:55 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_after_newline(char *str)
{
	int		i;
	char	*ret;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == '\n')
		{
			ret = ft_substr(str, i + 1, ft_strlen(str) - i);
			free(str);
			str = NULL;
			return (ret);
		}
		i++;
	}
	return (NULL);
}

char	*get_befor_newline(char **str)
{
	int		i;
	char	*line;
	char	*current;

	i = 0;
	current = *str;
	if (str && current)
	{
		while (current[i])
		{
			if (current[i] == '\n')
				return (ft_substr(current, 0, i + 1));
			i++;
		}
		if (current[i] == '\0')
		{
			line = ft_substr(current, 0, i);
			free(current);
			*str = NULL;
			return (line);
		}
	}
	return (NULL);
}

static char	*get_read(int fd, char *str)
{
	char	buff[1 + 1];
	int		rd;

	rd = 1;
	while (rd > 0)
	{
		rd = read(fd, buff, 1);
		if (rd < 0)
		{
			free(str);
			str = NULL;
			return (NULL);
		}
		buff[rd] = '\0';
		str = ft_strjoin(str, buff);
		if (!str || ft_strchr(str, '\n'))
			break ;
	}
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;

	if (fd < 0 || 1 <= 0)
		return (NULL);
	str = get_read(fd, str);
	if (!str)
		return (NULL);
	line = get_befor_newline(&str);
	if (!line)
	{
		free(str);
		str = NULL;
		return (NULL);
	}
	str = get_after_newline(str);
	return (line);
}
