#include "main.h"

/**
 * read_textfile - reads a file
 * @filename: file to read
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, reed;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	reed = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, reed);

	free(buff);
	close(fd);
	return (reed);
}
