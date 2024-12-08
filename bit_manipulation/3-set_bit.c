int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int n_bits;
	n_bits = sizeof(*n) * 8;
	if (index >= n_bits)
	return (-1);
	*n |= (1UL << index);
	return (1);
}