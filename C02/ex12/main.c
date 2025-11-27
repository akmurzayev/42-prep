
void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char str[] = "Men gitdim ve sen gitdin ve olar gitdi     olarawm gapydan girip ggyrdy aha maha ||";
	ft_print_memory(str, sizeof(str));
	return (0);
}
