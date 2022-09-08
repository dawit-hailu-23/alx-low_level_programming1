#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i = 0;
	char buff[letters];
	
	if (filename == NULL)
		return (0);
	else
	{
		if ((fd = open(filename, O_RDONLY)) == -1)
			return (0);
		if (read(fd, buff, sizeof(buff)) <= 0)
			return (0);
		buff[sizeof(buff) - 1] = '\0';
		printf("%s", buff);
		while (buff[i] != '\0')
			i++; 
	}
	return i;
}
