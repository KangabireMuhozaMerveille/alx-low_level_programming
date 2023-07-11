#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: what the file contains
 * Return: 1 on success, -1 when failed
 */
int create_file(const char *filename, char *text_content)
{	
	int fp;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fp < 0)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
	ssize_t num_written = write(fp, text_content, strlen(text_content));

	if (num_written < 0)
	{
		close(fp);
		return (-1);
	}
	}

	close(fp);
	return (1);

}
