#include "main.h"
#include <stdlib.h>

/**
 * Read_textfile- This function reads a text file and prints its contents to display
 * @filename: name of the text file to be read
 * @letters: number of letters to be read
 * Return: the number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
if (filename == NULL || letters < 1)
return (0);

int fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

char *buf = malloc(letters);
if (buf == NULL)
{
close(fd);
return (0);
}

size_t r = read(fd, buf, letters);
if (r < 1)
{
free(buf);
close(fd);
return (0);
}

size_t w = write(STDOUT_FILENO, buf, r);
if (w < 1)
{
free(buf);
close(fd);
return (0);
}

free(buf);
close(fd);
return (w);
}
