#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to write into
 * @text_content: text to add
 * Return: 1 on success, -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, i, err;
fd = i = err = 0;
if (!filename)
return (-1);
else if (!text_content || !text_content[0])
return (1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd < 0)
return (-1);
while (text_content[i])
i++;
err = write(fd, text_content, i);
if (err < 0)
return (-1);
close(fd);
return (1);
}
