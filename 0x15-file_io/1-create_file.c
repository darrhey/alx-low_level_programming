#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to be created
 * @text_content: text to add
 * Return: 1 on success, -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
int fd, i, err;
fd = i = err = 0;
if (!filename)
return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd < 0)
return (-1);
while (text_content && text_content[i])
i++;
err = write(fd, text_content, i);
if (err < 0)
return (-1);
close(fd);
return (1);
}
