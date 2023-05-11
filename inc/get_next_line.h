/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:46:13 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/10/26 10:58:23 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

int			ft_strchr_char(char *s, int c);
int			test_read(int fd);
void		*ft_calloc(size_t nmemb, size_t size);
size_t		ft_strlen(const char *s);
char		*ft_strjoin(const char *s1, const char *s2);
char		*get_line(char *file);
char		*join(char *buf, char *file);
char		*delete_line(char *file);
char		*malloc_fd(int fd, char *file);
char		*get_next_line(int fd);

#endif
