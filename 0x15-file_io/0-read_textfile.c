#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: number of letters printed.
 *
 * Return: if filename is NULL,if write fails, file cannot be opened 
 * return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int st;
	ssize_t mka, hal;
	char *buf;

	if (!filename)
		return (0);

	st = open(filename, O_RDONLY);

	if (st == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	mka = read(st, buf, letters);
	hal = write(STDOUT_FILENO, buf, mka);

	close(st);

	free(buf);

	return (hal);
}
