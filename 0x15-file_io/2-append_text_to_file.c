#include <stdio.h>
#include <stdlib.h>
#include"main.h"

/**
 * append_text_to_file - that apeends text at the end pf a file
 * @filename: The name of the file
 * @text_content: content file
 * Description: function that appends text at the end of a file
 * Return: 1 if the file exists and -1 if the file does not exist 
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	write(file, text_content, i);

	return (1);
}