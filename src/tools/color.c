#include "cube.h"

void	ft_ravno(int *x, int *y, int i, int j)
{
	*x = i;
	*y = j;
}

int	create_trgb(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}
