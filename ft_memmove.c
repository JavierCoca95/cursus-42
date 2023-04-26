#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
    unsigned char *pointer_to_dest;
    const unsigned char *pointer_to_src;

	i = 0;
    pointer_to_dest = dest;
    pointer_to_src = src;
	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
	{
		while (i < n)
		{
			*pointer_to_dest = *pointer_to_src;
			i++;
            pointer_to_dest++;
            pointer_to_src++;
		}
	}
	else
	{
		while (n > 0)
		{
			pointer_to_dest[n-1] = pointer_to_src[n-1];
			n--;
		}
	}
	return (dest);
}