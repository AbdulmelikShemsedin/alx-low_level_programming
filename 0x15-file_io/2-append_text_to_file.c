#include "main.h"
/**
 * append_text_to_file - appends text to end
 * @filename: ..
 * @text_content: ..
 * Return: 1 on success; -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, strlen = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[strlen]; strlen++)
			;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, strlen);
	if (o == -1 || w == -1)
		return (-1);
	close(o);

	return (1);
}
