/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 13:30:57 by ssallami          #+#    #+#             */
/*   Updated: 2024/12/29 16:50:22 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <fcntl.h>
# include <stddef.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr(char *s, char c);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*get_after_newline(char *str);
char	*get_befor_newline(char **str);
char	*get_next_line(int fd);

#endif
