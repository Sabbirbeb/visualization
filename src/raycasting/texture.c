#include "cube.h"

void	load_img(t_data_img *img, int **texture)
{
	int	x;
	int	y;

	y = 0;
	*texture = (int *)ft_calloc(sizeof(int),
			img->width * img->height);
	img->addr = mlx_get_data_addr(img->img, \
		&img->bits_per_pixel, &img->line_length, &img->endian);
	while (y < img->height)
	{
		x = 0;
		while (x < img->width)
		{
			(*texture)[img->width * y + x] = ((int *)img->addr) \
				[img->width * y + x];
			x++;
		}
		y++;
	}
}

int	save_wall_texture(char *line, t_data *data, int i)
{
	int		j;
	char	*path;

	j = 3;
	while (!ft_isprint(line[j]))
		j++;
	path = ft_strdup(&line[j]);
	data->walls[i].img = mlx_xpm_file_to_image(data->mlx, path,
			&data->walls[i].width, &data->walls[i].height);
	free(path);
	if (!data->walls[i].img)
		return (1);
	return (0);
}
