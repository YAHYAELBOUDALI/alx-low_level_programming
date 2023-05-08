#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 *
 * @filename: Name of the file to append to.
 * @text_content: String to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd, wr, len;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    if (text_content != NULL)
    {
        for (len = 0; text_content[len] != '\0'; len++)
            continue;
        wr = write(fd, text_content, len);
        if (wr == -1)
            return (-1);
    }

    close(fd);
    return (1);
}
