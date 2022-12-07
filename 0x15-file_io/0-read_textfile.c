#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *read_textfile - reads a text file and prints it to the POSIX
 *@filename: the argument for the text filename
 *@letters: the string argument for the textual content
 *Return: 0 if NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fnum;
ssize_t text, nwr;
char *buf;
if (!filename)
return (0);
fnum = open(filename, O_RDONLY);
if  (fnum == -1)
return (0);
buf = malloc(sizeof(char) * (letters));
if (!buf)
return (0);
text = read(fnum, buf, letters);
nwr = write(STDOUT_FILENO, buf, text);
close(fnum);
free(buf);
return (nwr);
}
