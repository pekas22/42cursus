#include "libft.h"

static int number_size(unsigned int n)
{
    int i = 1;
    while (n / 10 > 0)
    {
        n /= 10;
        i++;
    }
    return (i);
}

char *ft_itoa(int n)
{
    unsigned int number;
    char *res;
    int size;

    if (n < 0)
        number = -n;
    else
        number = n;
    size = number_size(number);
    if (n < 0)
        size++;
    res = (char *)malloc(size + 1);
    if (!res)
        return (NULL);
    if (n < 0)
        res[0] = '-';
    res[size] = '\0';
    while (size > 0 && res[size - 1] != '-')
    {
        res[size - 1] = number % 10 + '0';
        number /= 10;
        size--;
    }
    return (res);
}

int	main(void)
{
    int	a = 123;
    printf("ft_itoa 123: %s\n", ft_itoa(a));
    int	b = -10;
    printf("ft_itoa -10: %s\n", ft_itoa(b));
    int	c = 0;
    printf("ft_itoa 0: %s\n", ft_itoa(c));
    int d = -2147483648;
    printf("ft_itoa -2147483648: %s\n", ft_itoa(d));
    return (0);
}
