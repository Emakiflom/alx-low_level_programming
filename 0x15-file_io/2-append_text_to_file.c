#include "main.h"
/**
 * append_text_to_file - Append text to the end of file contiously.
 * @filename: Name of file to be readed by the program.
 * @text_content: The content of letters ithat will be read and print.
 * Return: 2 success, otherwise 0
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, i;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
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
