/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:46:13 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/10/26 11:12:45 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t		i;
	size_t		y;
	char		*str;

	if (!s1 || !s2)
		return (NULL);
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	y = 0;
	while (s2[y])
	{
		str[i] = s2[y];
		i++;
		y++;
	}
	str[i] = '\0';
	return (str);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_strchr_char(char *s, int c)
{
	int	i;

	i = 0;
	while (c > 127)
		c -= 128;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*s;

	if (size > 2147483647 || nmemb > 2147483647)
		return (NULL);
	else if (size == 0 || nmemb == 0)
	{
		s = malloc(0);
		return (s);
	}
	else if (((size_t)(nmemb * size) / size) != nmemb)
		return (NULL);
	s = malloc((nmemb * size));
	if (!s)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{
		s[i] = '\0';
		i++;
	}
	return ((void *)s);
}
