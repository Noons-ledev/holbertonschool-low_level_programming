#ifndef MAIN_H
#define MAIN_H
int get_bit(unsigned long int n, unsigned int index);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);
int _strlen(const char *b);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
#endif
