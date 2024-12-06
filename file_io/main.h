#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
size_t _strlen(char *str);
int append_text_to_file(const char *filename, char *text_content);
int write_t(const char *file_to, int fd_dest, char *buffer, ssize_t read_bytes);
int open_fileto(const char *file_to);
int open_filefrom(const char *file_from);
int read_and_copy(const char *file_from, const char *file_to, size_t bytes);
#endif
