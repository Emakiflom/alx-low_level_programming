#include "main.h"
/**
 * create_file - Creates a file in separet part.
 * @filename: Name of file to be readed by the program.
 * @text_content: The content of letters ithat will be read and print.
 * Return: 2 success, otherwise 0
 */

int create_file(const char *filename, char *text_content)
{
	int file, i;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (i = 0; *(text_content + i) != '\0'; i++)
		;
	write(file, text_content, i);
	close(file);
	return (1);
}
