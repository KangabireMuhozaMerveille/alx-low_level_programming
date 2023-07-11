#include "main.h"
/**
 * read_textfile - it reads the elements in the file
 * @filename: name of the file
 * @letters: content of the file
 * Return: 0 if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
  FILE *fp;
  char *buffer;
  ssize_t num_read, num_written;

  if (filename == NULL)
    return (0);

  fp = fopen(filename, "r");
  if (fp == NULL)
    {
      return (0);
    }
  buffer = malloc(letters + 1);
  if (buffer == NULL)
    {
      fclose(fp);
      return (0);
    }
  num_read = fread(buffer, sizeof(char), letters, fp);
  if (num_read < 0)
    {
      fclose(fp);
      free(buffer);
      return (0);
    }
  num_written = fwrite(buffer, sizeof(char), num_read, stdout);
  if (num_written != num_read)
    {
      fclose(fp);
      free(buffer);
      return (0);
    }
  fclose(fp);
  free(buffer);
  return (num_written);
}
