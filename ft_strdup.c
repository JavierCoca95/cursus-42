#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
//     char	*str;

//     str = ft_strdup("Hello World!");
//     if (str == NULL)
//         return (1);
//     printf("%s\n", str);
//     free(str);
//     return (0);
// }
// ** The strdup() function allocates sufficient memory for a copy of the
// ** string s1, does the copy, and returns a pointer to it.  The pointer
// ** may subsequently be used as an argument to the function free(3).
// ** If insufficient memory is available, NULL is returned and errno is set
// ** to ENOMEM.
// ** The string returned by strdup() and strndup() is malloc(3)ed and can
// ** be freed with free(3).
// The +1 is for the null terminator.  The string is an array of characters
// and the null terminator is the last character in the array.  The null
// terminator is a character with the value 0.  It is used to mark the end
// of the string.  The string "Hello World!" is 12 characters long, but the
// array that holds it is 13 characters long.  The last character is the null
// terminator.  The null terminator is not part of the string.
