#include "libft.h"

char	ft_tolower(char c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
