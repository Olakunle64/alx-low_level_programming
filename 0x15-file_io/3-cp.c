#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void create_file(char *argv2, char *buffer, int *fd);

/**
 * main - write a program that copies the content of
 * a file to another file
 * @ac: argument count
 * @argv: argument vector
 *
 * Return: Always (0) Success.
 */

int main(int ac, char **argv)
{
	int file_des;
	char buffer[1024];
	int flag;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (access(argv[1], F_OK | R_OK) != 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_des = open(argv[1], O_RDONLY);
	if (file_des == -1)
		exit(1);
	create_file(argv[2], buffer, &file_des);
	flag = close(file_des);
	if (flag == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_des);
		exit(100);
	}
	return (0);
}

/**
 * create_file - create a file and copy the content of buffer
 * into it.
 * @argv2: file name
 * @buffer: string to copy to the file argv2
 * @count: number of chars read
 * @fd: pointer to the file descriptor
 *
 * Return: void.
 */

void create_file(char  *argv2, char *buffer, int *fd)
{
	ssize_t by_c;
	int flag, file_des;
	ssize_t count;

	if (access(argv2, F_OK) == 0 && access(argv2, W_OK) != 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv2);
		exit(99);
	}
	else if (access(argv2, F_OK | W_OK) == 0)
		file_des = open(argv2, O_WRONLY | O_TRUNC);
	else
		file_des = open(argv2, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_des == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv2);
		exit(99);
	}
	while ((count = read(*fd, buffer, 1024)) > 0)
	{
		by_c = write(file_des, buffer, count);
		if (by_c == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv2);
			close(file_des);
			exit(99);
		}
		lseek(*fd, count, SEEK_CUR);
	}
	flag = close(file_des);
	if (flag == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_des);
		exit(100);
	}
}



