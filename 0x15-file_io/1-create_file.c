#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to create.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int st;
	int nletters;
	int mka;

	if (!filename)
		return (-1);

	st = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (st == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	mka = write(st, text_content, nletters);

	if (mka == -1)
		return (-1);

	close(st);

	return (1);
}
