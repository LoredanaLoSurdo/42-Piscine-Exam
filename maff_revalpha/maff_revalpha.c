#include <unistd.h>

void	maff_revalpha(void)
{
	char	odd;
	char	even;

	odd = 'z';
	even = 'Y';
	while (odd >= 'b' && even >= 'A')
	{
		write(1, &odd, 1);
		write(1, &even, 1);
		odd -= 2;
		even -= 2;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	maff_revalpha();
}
