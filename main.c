#include "get_next_line.h"

int main(void)
{
	printf("Test main\n\n");
	int	fd;
	char *ligne;
	int lignes;

	lignes = 1;
	fd = open("file.txt", O_RDONLY);

	while (1)
	{
		ligne = get_next_line(fd);
		if (ligne == NULL)
		{
			printf("%d->%s", lignes++, ligne);
			break;
		}
		printf("%d->%s", lignes++, ligne);
		free(ligne);
	}
	return (0);
}
