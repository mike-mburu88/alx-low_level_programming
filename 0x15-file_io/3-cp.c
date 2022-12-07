#include "main.h"
#include <stdio.h>
/**
 *error_file - checks for the opened state of a file
 *@file_from: the variable for the source file
 *@file_to: the destination file variable
 *@argv: the argument string list
 *Return: always 0
 */
void error_file(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf
(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
/**
 *main - used to run the program code
 *@argc: the argument count
 *@argv: the list of all arguments in the function
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
int err_close;
int file_to, file_from;
ssize_t xchars, nwr;
char buf[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
error_file(file_from, file_to, argv);
xchars = 1024;
while (xchars == 1024)
{
xchars = read(file_from, buf, 1024);
if (xchars == -1)
error_file(-1, 0, argv);
nwr = write(file_to, buf, xchars);
if (nwr == -1)
error_file(0, -1, argv);
}
err_close = close(file_from);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
err_close = close(file_to);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
return (0);
}
