#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#define PERM 0600

/**
 * create_file - creates file
 * @filename: the file name
 * @text_content: the text to write to the file
 *
 * Return: 1 on success -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	char buff[sizeof(text_content)];

	strcat(buff, text_content);
	fd = creat(filename, 0600);

	if (write(fd, buff, sizeof(buff)) == -1)
		return (0);
	return (1);
}
