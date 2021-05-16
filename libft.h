/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungao <jungao@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:48:06 by jungao            #+#    #+#             */
/*   Updated: 2021/05/15 16:42:15 by jungao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include	<stdlib.h>

void	*ft_memset(void *b, int c, size_t len);
void	bzero(void *s, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);
void	*memccpy(void *dest, const void *src, int c, size_t n);
void	*memmove(void *dest, const void *src, size_t n);
void	*memchr(const void *s, int c, size_t n);
size_t	strlen(const char *s);
size_t	strlcpy(char *dest, const char *src, size_t size);
size_t	strlcat(char *dest, const char *src, size_t size);
char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);
char	*strnstr(const char *haystack, const char *needle, size_t len);
int		strncmp(const char *s1, const char *s2, size_t n);
int		atoi(const char *nptr);
int		isalpha(int c);
int		isdigit(int c);
int		isalnum(int c);
int		isascii(int c);
int		isprint(int c);
int		toupper(int c);
int		tolower(int c);
char	*strdup(const char *s1);
void	*calloc(size_t count, size_t size);

#endif
