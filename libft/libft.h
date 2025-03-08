/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 16:28:39 by ssallami          #+#    #+#             */
/*   Updated: 2025/03/07 16:28:45 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

char	**ft_split(const char *s, char c);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_atoi(char *str);

#endif
