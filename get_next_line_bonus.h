/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:46:13 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/10/25 16:53:54 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <unistd.h>

void		*ft_calloc(size_t nmemb, size_t size);
int			ft_strchr_char(char *s, int c);
size_t		ft_strlen(const char *s);
char		*ft_strjoin(const char *s1, const char *s2);
char		*get_line(char *file);
char		*join(char *buf, char *file);
char		*delete_line(char *file);
char		*malloc_fd(int fd, char *file);
char		*get_next_line(int fd);

#endif
