#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_file(int fd);
char *create_cuffer(char *file_name);

/**
 * create_buffer - copies the content of a file to another file
 * @file_name: name a file
 * Return: 0
 */
char *create_buffer(char *file_name)
{
	char *buffer;
