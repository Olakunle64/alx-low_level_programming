#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - read a test of file and print it to the
 * POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return: return 0 if the file can not be opened or
 * read OR return 0 if the file is NULL or if write
 * fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	ssize_t count, w_byte;
	char *buffer;

	if (filename == NULL || access(filename, F_OK) == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
	{
		free(buffer);
		return (0);
	}
	count = read(file_des, buffer, letters);
	if (count == 0)
	w_byte = write(1, buffer, (count < (ssize_t)letters) ?
			(size_t)count : letters);
	if (w_byte != count)
	{
		close(file_des);
		free(buffer);
		return (0);
	}
	close(file_des);
	free(buffer);
	return (w_byte);
}
