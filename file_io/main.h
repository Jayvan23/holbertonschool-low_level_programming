#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print,
 *         or 0 if an error occurred.
 */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
