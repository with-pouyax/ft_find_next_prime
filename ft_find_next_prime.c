int	is_prime(int number)
{
	int	divider;

	divider = 2;
	while (divider <= number / divider)
	{
		if (number % divider == 0)
			return (0);
		divider++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	next_prime;

	next_prime = nb;
	if (next_prime < 2)
		return (2);
	while (!is_prime(next_prime))
		next_prime++;
	return (next_prime);
}
