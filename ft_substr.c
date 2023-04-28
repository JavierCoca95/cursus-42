
#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t  i;

    i = 0;
    if (s == NULL)
    	return (NULL);
    if (start > ft_strlen(s))
    	return (ft_strdup(""));
    str = malloc(sizeof(char) * len + 1);
    if (str == NULL)
		return (NULL);
	while (i < len)
    {
    	str[i] = s[start + i];
    	++i;
    }
    str[i] = '\0';
    return (str);
}

// ** The string returned by this function must be freed with free(3).
// ** The substring begins at index 'start' and is of maximum size 'len'.
// ** Returns the substring.  NULL if the allocation fails.
// ** The substring is a copy of the original string.  It is not a pointer
// ** into the original string.
