#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*int	main(void)
{
	int	c;
	c = 'A';
	printf("%c", ft_tolower(c));
	return(0);
}*/