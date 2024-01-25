#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>	// to use function read
# include <stdlib.h>	// to use malloc
# include <stdio.h>		// to use a main.c - debug
# include <fcntl.h>		// to use open only in the main
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
#endif
char	*get_next_line(int fd);

#endif
