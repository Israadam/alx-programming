#include "main.h"

/**
 * read_textfile - function that reads a text file and prints the letters
 * @filename: the file to be modified
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *ptt;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	ptt = malloc(sizeof(char) * (letters));
	if (!ptt)
		return (0);

	nrd = read(fd, ptt, letters);
	nwr = write(STDOUT_FILENO, ptt, nrd);

	close(fd);

	free(ptt);

	return (nwr);
}
