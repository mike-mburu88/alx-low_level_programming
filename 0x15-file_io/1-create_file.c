#include "main.h"

/**
 *create_file - a function that creates a file
 *@filename: the name of the file to be created
 *@text_content: argument for the textual content
 *Return: 1 on success, -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
int fnum;
int xletters;
int rwrtext;
if (!filename)
return (-1);
fnum = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fnum == -1)
return (-1);
if (!text_content)
text_content = "";
if (text_content)
{
for (xletters = 0; text_content[xletters]; xletters++)
rwrtext = write(fnum, text_content, xletters);
if (rwrtext == -1)
return (-1);
}
close(fnum);
return (1);
}
