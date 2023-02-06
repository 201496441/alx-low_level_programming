#include "main.h"
/**
 * append_text_to_file - This function adds text at EOF
 * @filename: name of the file to append data to.
 * @text_content: data to append to file
 * Return: 1 if succesfull else -1 on err
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_ = 0, chk = 0, i = 0;

	if (!filename)
		return (-1);

	file_ = open(filename, O_WRONLY | O_APPEND);
	if (file_ < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		chk = write(file_, text_content, i);
		if (chk < 0)
		return (-1);
	}
	close(file_);
	return (1);
}

