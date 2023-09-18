#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed thechars.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;

