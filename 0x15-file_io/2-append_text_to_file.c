#include "main.h"
/**
 * append_text_to_file - it that appends text at the end of a file
 * @filename:  the name of the file
 * @text_content: what the file contains
 * Return: 1 if success and -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;

	int num_written;

	fp = open(filename, O_WRONLY | O_APPEND);
	if (filename == NULL)
	{
		return (-1);
	}

	if (fp < 0)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		num_written = write(fp, text_content, strlen(text_content));
	}
	if (num_written < 0)
	{
		close(fp);
		return (0);
	}
	close(fp);
	return (1);
}
