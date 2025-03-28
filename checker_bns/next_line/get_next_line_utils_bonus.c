/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 21:49:05 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/20 21:04:48 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_str;
	size_t	total_len;
	size_t	i;
	size_t	j;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	new_str = (char *)malloc(total_len * sizeof(char));
	if (!new_str)
	{
		free(s1);
		return (NULL);
	}
	i = -1;
	while (s1[++i])
		new_str[i] = s1[i];
	j = -1;
	while (s2[++j])
		new_str[i++] = s2[j];
	new_str[i] = '\0';
	free(s1);
	return (new_str);
}

int	ft_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}
