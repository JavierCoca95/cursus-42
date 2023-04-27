
#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void	*ptr;

    ptr = malloc(count * size);
    if (ptr == NULL)
        return (NULL);
    ft_bzero(ptr, count * size);
    return (ptr);
}

// int	main(void)
// {
//     char	*str;

//     str = ft_calloc(10, sizeof(char));
//     if (str == NULL)
//         return (1);
//     printf("%s\n", str);
//     free(str);
//     return (0);
// }
// make a function that recreates the calloc function and the main
// ** function to test it
// ** The calloc() function contiguously allocates enough space for count
// ** objects that are size bytes of memory each and returns a pointer to
// ** the allocated memory.  The allocated memory is filled with bytes of
// ** value zero.
// ** If count or size is 0, then calloc() returns either NULL, or a unique
// ** pointer value that can later be successfully passed to free().
// ** If the multiplication of count and size would result in integer
// ** overflow, then calloc() returns an error.

