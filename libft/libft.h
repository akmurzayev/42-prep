/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  libft.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuryagdy <nuryagdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:30:00 by nuryagdy          #+#    #+#             */
/*   Updated: 2025/05/18 00:30:00 by nuryagdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

//Important Functions
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char const *str);
int		ft_isalpha(char c);
int		ft_isdigit(char c);
int		ft_isalnum(char c);
int		ft_isascii(int c);
int		ft_isprint(char c);
char	ft_toupper(char c);
char	ft_tolower(char c);
char	*ft_strchr(char *str, char c);
char	*ft_strrchr(char *str, char c);
int		ft_strncmp(char *s1, char *s2, size_t size);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
int		ft_strlcpy(char *dest, char const *src, size_t n);
int		ft_strlcat(char *dest, const char *src, size_t n);
void	*ft_memchr(void *str, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strdup(char *s1);
void	*ft_calloc(size_t count, size_t size);
int		ft_atoi(const char *str);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_itoa(int n);
int		ft_isinset(char c, char const *set);
char	*ft_strtrim(char const *s1, char const *set);

#endif
