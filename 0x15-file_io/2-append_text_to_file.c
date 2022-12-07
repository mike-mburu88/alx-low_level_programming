#include "main.h"
/**
 *append_text_to_file - function that appends text
 *@filename: argument for the filename
 *@text_content: the string literal argument
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fnum;
int xletters;
int read_write;
if (!filename)
return (-1);
fnum = open(filename, O_WRONLY | O_APPEND);
if (fnum == -1)
return (-1);
if (text_content)
{
for (xletters = 0; text_content[xletters]; xletters++)
;
read_write = write(fnum, text_content, xletters);
if (read_write == -1)
return (-1);
}
close(fnum);
return (1);
}
