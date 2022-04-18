#include <unistd.h>

void	only_a(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	only_a('a');
}
