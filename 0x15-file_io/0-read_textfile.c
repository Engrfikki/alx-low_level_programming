#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: number of letters to be read.
 *
 * Return: number of letters printed. on failure, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)

{
	int fd;
	ssize_t fik, xtun;
	ssize_t fd;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	fik = read(fd, buf, letters);
	xtun = write(STDOUT_FILENO, buf, fik);

	close(fd);

	free(buf);

	return (xtun);
}
