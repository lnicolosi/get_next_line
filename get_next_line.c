#include "get_next_line.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char *get_next_line(int fd)
{
	char	buffer[BUFFER_SIZE];
	ssize_t	bytesRead;
	char	*resultat;

	resultat = malloc(sizeof(char) * ft_strlen(buffer) + 1);
	while((bytesRead = read(fd, buffer, BUFFER_SIZE)))
	{
		if (bytesRead == -1)
		{
			printf("Erreur de lecture\n");
			return (NULL);
		}
		else
		{
			ft_strcpy(resultat, buffer);
			return (resultat);
		}
	}

	return (resultat);


}
