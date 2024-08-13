#include "main.h"

/**
 * create_file - creates file
 * @filename: ...
 * @text_content: NULL terminated str
 * Return: 1 on success; -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int strlen = 0, w, fp;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[strlen]; strlen++)
			;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fp, text_content, strlen);
	if (fp == -1 || w == -1)
		return (-1);
	close(fp);

	return (1);
}
