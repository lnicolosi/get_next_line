#include "get_next_line.h"

int main(void)
{
	printf("Test main\n");
	int fd = open("file.txt", O_RDONLY);
	char *ligne = get_next_line(fd);
	printf("la ligne lue : %s\n", ligne);
	free(ligne);
	close(fd);
	return (0);
}
