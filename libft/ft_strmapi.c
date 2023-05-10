#include"libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *map;
    size_t i;
    
    i = 0;
    if (!s || !f)
        return (NULL);
    map = (char *)malloc(ft_strlen(s) + 1);
    if (!map)
        return (NULL);  
    while (s[i])
    {
        map[i] = f(i, s[i]);
        i++;
    }
    map[i] = '\0';
    return (map);
}