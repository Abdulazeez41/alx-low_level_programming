#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * printErrorAndExit - Prints error message and exits with specified exit code
 * @errorMsg: Error message to print
 * @exitCode: Exit code to use when exiting the program
 */
void printErrorAndExit(const char *errorMsg, int exitCode)
{
	dprintf(STDERR_FILENO, "%s\n", errorMsg);
	exit(exitCode);
}

/**
 * checkArguments - checks for the correct number of arguments
 * @argc: number of arguments
 */
void checkArguments(int argc)
{
	if (argc != 3)
		printErrorAndExit("Usage: cp file_from file_to", 97);
}

/**
 * checkFileRead - checks that file exists and can be read
 * @file: file name
 * @fd: file descriptor of the file, or -1
 */
void checkFileRead(const char *file, int fd)
{
	if (fd == -1)
	{
		char errorMsg[100];

		snprintf(errorMsg, sizeof(errorMsg), "Error: Can't read from file %s", file);
		printErrorAndExit(errorMsg, 98);
	}
}

/**
 * checkFileWrite - checks that file can be written to
 * @file: file name
 * @fd: file descriptor of the file, or -1
 */
void checkFileWrite(const char *file, int fd)
{
	if (fd == -1)
	{
		char errorMsg[100];

		snprintf(errorMsg, sizeof(errorMsg), "Error: Can't write to %s", file);
		printErrorAndExit(errorMsg, 99);
	}
}

/**
 * checkClose - checks that file descriptor was closed properly
 * @result: result of the close operation (0 for success, -1 for failure)
 * @fd: file descriptor
 */
void checkClose(int result, int fd)
{
	if (result == -1)
	{
		char errorMsg[100];

		snprintf(errorMsg, sizeof(errorMsg), "Error: Can't close fd %d", fd);
		printErrorAndExit(errorMsg, 100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int sourceFd, destFd, closeDest, closeSource;
	ssize_t bytesRead, bytesWritten;
	char buffer[BUFFER_SIZE];
	mode_t file_perm;

	checkArguments(argc);

	sourceFd = open(argv[1], O_RDONLY);
	checkFileRead(argv[1], sourceFd);

	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	destFd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	checkFileWrite(argv[2], destFd);

	bytesRead = BUFFER_SIZE;
	while (bytesRead == BUFFER_SIZE)
	{
		bytesRead = read(sourceFd, buffer, BUFFER_SIZE);
		checkFileRead(argv[1], bytesRead);

		bytesWritten = write(destFd, buffer, bytesRead);
		if (bytesWritten != bytesRead)
			bytesWritten = -1;
		checkFileWrite(argv[2], bytesWritten);
	}

	closeDest = close(destFd);
	closeSource = close(sourceFd);
	checkClose(closeDest, destFd);
	checkClose(closeSource, sourceFd);

	return (0);
}

