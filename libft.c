/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  libft.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuryagdy <nuryagdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:30:00 by nuryagdy          #+#    #+#             */
/*   Updated: 2025/05/18 00:30:00 by nuryagdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	ft_isalpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

int	ft_isdigit(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	ft_isalnum(char c)
{
	if ((c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57))
		return (1);
	return (0);
}

int	ft_isascii(char c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	ft_isprint(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

char	ft_toupper(char c)
{
	if (c <= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	ft_tolower(char c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

char	*ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strrchr(char *str, char c)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}

int	ft_strncmp(char *s1, char *s2, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (s1[i] != s2[i] || s1[i] != '\0' || s2[i] != '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *) b;
	while (i < len)
	{
		ptr[i] = (unsigned char) c;
		i++;
	}
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	unsigned char	*ptr = (unsigned char *) s;

	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest1 = (char *) dest;
	const char	*src1 = (const char *) src;

	i = 0;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	x;
	char	*dest1 = (char	*) dest;
	const char	*src1 = (const char *) src;

	i = 0;
	x = n - 1;
	if (dest1 > src1)
	{
		while (x + 1 > 0)
		{
			dest1[x] = src1[x];
			x--;
		}
	}
	else
	{
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	return (dest);
}

int	ft_strlcpy(char *dest, char *src, size_t n)
{
	size_t	i;
	int	src_size;

	char	*dest1 = dest;
	char	*src1 = src;
	i = 0;
	src_size = 0;
	while (src1[src_size] != '\0')
		src_size++;
	if (n == 0)
		return (src_size);
	while (i < n - 1 && src1[i] != '\0')
	{
		dest1[i] = src1[i];
		i++;
	}
	dest1[i] = '\0';
	return (src_size);
}

int	ft_strlcat(char	*dest, const char *src, size_t n)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;
	size_t	orgnl_dlen;

	i = 0;
	dlen = 0;
	slen = 0;
	while (dest[dlen] != '\0')
		dlen++;
	while (src[slen] != '\0')
		slen++;
	orgnl_dlen = dlen;
	if (n <= dlen)
		return (n + slen);
	if (n > dlen)
	{
		while (i < n - orgnl_dlen - 1 && src[i] != '\0')
		{
			dest[dlen] = src[i];
			i++;
			dlen++;
		}
		dest[dlen] = '\0';
	}
	return (slen + orgnl_dlen);
}

void	*ft_memchr(void *str, int c, size_t n)
{
	size_t	i;
	unsigned char	c1 = (unsigned char) c;
	unsigned char	*str1 = (unsigned char *)str;

	i = 0;
	while (i < n)
	{
		if (str1[i] == c1)
			return (&str1[i]);
		i++;
	}
	return (NULL);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	const unsigned char	*s01 = (const unsigned char *)s1;
	const unsigned char	*s02 = (const unsigned char *)s2;

	i = 0;
	while (i < n)
	{
		if (s01[i] != s02[i])
			return (s01[i] - s02[i]);
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s2[0] == '\0')
		return ((char	*)(s1 + i));
	while (i < n)
	{
		j = 0;
		while (i + j < n && s1[i + j] == s2[j])
			j++;
		if (s2[j] == '\0')
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}

char	*ft_strdup(char *s1)
{
	int	i;
	int	len;
	char	*copy;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;
	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
        	|| str[i] == '\f' || str[i] == '\n'
        	|| str[i] == '\r')
        		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * sign);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	len1;
	unsigned int	i;
	char	*s1;

	i = 0;
	len1 = 0;
	while (s[len1] != '\0')
		len1++;
	if (start >= len1)
	{
		s1 = malloc(1);
		if (!s1)
			return (NULL);
		s1[0] = '\0';
		return (s1);
	}
	s1 = malloc((len + 1) * sizeof(char));
	if (!s1)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		s1[i] = s[start + i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	int	i;
	int	j;
	char	*word;
	int	s1_len;
	int	s2_len;

	i = 0;
	j = 0;
	s1_len = 0;
	s2_len = 0;
	if (!s1 || !s2)
	{
		return (NULL);
	}
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;
	word = malloc ((s1_len + s2_len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (s1[i] != '\0')
	{
		word[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		word[i] = s2[j];
		i++;
		j++;
	}
	word[i] = '\0';
	return (word);
}

char	*ft_itoa(int n)
{
	int	i;
	int	j;
	int	bas;
	int	temp;
	char	*count;

	j = 0;
	bas = 0;
	if (n == 0)
	{
		count = malloc(2);
		if (!count)
			return (NULL);
		count[0] = '0';
		count[1] = '\0';
		return (count);
	}
	if (n < 0)
	{
		j = 1;
		n *= -1;
	}
	temp = n;
	while (temp > 0)
	{
		temp /= 10;
		bas++;
	}
	count = malloc((bas + j + 1) * sizeof(char));
	if (!count)
		return (NULL);
	i = (bas + j) - 1;
	while (i >= j)
	{
		count[i] = '0' + (n % 10);
		n /= 10;
		i--;
	}
	if (j == 1)
		count[0] = '-';
	count[bas + j] = '\0';
	return (count);
}

int	ft_isinset(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char *s, char *set)
{
	int	bas;
	int	son;
	int	len;
	int	i;
	char	*word;

	len = 0;
	bas = 0;
	i = 0;
	while (s[len] != '\0')
		len++;
	while (s[bas] && ft_isinset(s[bas], set))
		bas++;
	son = len - 1;
	while (son > bas && ft_isinset(s[son], set))
		son--;
	word = malloc(((son - bas) + 1) * sizeof(char));
	while (bas <= son)
	{
		word[i] = s[bas];
		i++;
		bas++;
	}
	word[i] = '\0';
	return (word);
}
