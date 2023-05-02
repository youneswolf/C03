#include <stdio.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	 int	i;
	 int	j;
	 int	dlen;
	 int	slen;
     int a=0;
	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dlen = j;
	while (src[a] != '\0')
	{
		a++;
	}	
	slen = a;
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src [i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}

int main (void)
{
	char src[] = "test";
    	char dest [] = "1337";
    printf("%i \n", ft_strlcat(dest, src,10));
    printf("%s \n", dest);
