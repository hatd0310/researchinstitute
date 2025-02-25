#include <stdio.h>

int main()
{
}

void read_file()
{
}

void write_file()
{
	FILE* fptr;

	// Open a file in writing mode
	fptr = fopen("filename.txt", "w"); // fopen(filename, mode)

	// Write some text to the file
	fprintf(fptr, "Some text");

	// Close the file
	fclose(fptr);
}