#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - that reads a text file and prints
 * @filename: variable pointer
 * @letters: size letters
 * Description: Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
if (filename == NULL)
return (0);
int file = open(filename, O_RDONLY);
if (file == -1)
{
return (0);
}
char *buffer = (char *)malloc(letters);
if (buffer == NULL)
{
close(file);
return (0);
}
ssize_t bytes_read = read(file, buffer, letters);
if (bytes_read == -1)
{
close(file);
free(buffer);
return (0);
}
if (close(file) == -1)
{
free(buffer);
return (0);
}
ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || (size_t)bytes_written != (size_t)bytes_read)
{
free(buffer);
return (0);
}
free(buffer);
return (bytes_rea);
}
