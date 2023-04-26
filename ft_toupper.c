#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*int	main(void)
{
	int	c;
	c = 'a';
	printf("%c", ft_toupper(c));
	return(0);
}*/