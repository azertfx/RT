/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtv1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezzahir <hezzahir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 03:23:37 by anabaoui          #+#    #+#             */
/*   Updated: 2020/02/29 01:01:40 by hezzahir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

void	set_pixel_color(t_rt *v, int i, int j, t_vect color)
{
	v->m.img_data[(j * IMG_W + i) * 4 + 0] =
							fmin(255, fmax(0, pow(color.z, 1 / 2.2)));
	v->m.img_data[(j * IMG_W + i) * 4 + 1] =
							fmin(255, fmax(0, pow(color.y, 1 / 2.2)));
	v->m.img_data[(j * IMG_W + i) * 4 + 2] =
							fmin(255, fmax(0, pow(color.x, 1 / 2.2)));
	v->m.img_data[(j * IMG_W + i) * 4 + 3] =
							0;
}

void	*draw_threads(void *t)
{
	t_rt		*v;
	int			i;
	int			j;
	double		x;
	double		y;

	v = (t_rt *)t;
	j = v->thread.start;
	while (j < v->thread.end)
	{
		y = PX_Y((double)j);
		i = 0;
		while (i < IMG_W)
		{
			x = PX_X((double)i);
			generate_camera_ray(v, &v->thread.ray, y, x);
			v->thread.color = (t_vect){0, 0, 0};
			v->thread.color = ray_trace(v, &v->thread.ray, &v->thread.color);
			set_pixel_color(v, i, j, v->thread.color);
			i++;
		}
		j++;
	}
	return (NULL);
}

void	draw(t_rt v)
{
	t_rt		t[THREADS];
	pthread_t	id[THREADS];
	int			i;
	int			j;

	i = 0;
	v.thread.start = 0;
	generate_camera(&v);
	while (i < THREADS)
	{
		ft_memcpy(&t[i], &v, sizeof(t_rt));
		t[i].thread.start = v.thread.start;
		t[i].thread.end = IMG_H / THREADS + v.thread.start;
		pthread_create(&id[i], NULL, draw_threads, (void *)&t[i]);
		v.thread.start = t[i].thread.end;
		i++;
	}
	j = 0;
	while (j < THREADS)
	{
		pthread_join(id[j], NULL);
		j++;
	}
}

int		check_file(t_rt *v)
{
	// free_all_object(v);
	if (!v->event.file || !parse_file(v->event.file, v))
	{
		// free_all_object(v);
		ft_putendl("Try Again!");
		return (0);
	}
	return (1);
}

int		rtv1(t_rt *v, char *file)
{
	ft_bzero(v, sizeof(t_rt));
	v->event.file = file;
	v->event.file_origin = file;
	if (!check_file(v))
		return (0);
	v->m.mlx_ptr = mlx_init();
	v->m.win_ptr = mlx_new_window(v->m.mlx_ptr, WIN_W, IMG_H, "1337 RT");
	v->m.img_ptr = mlx_new_image(v->m.mlx_ptr, IMG_W, IMG_H);
	v->m.img_data = (unsigned char *)mlx_get_data_addr(
			v->m.img_ptr, &v->m.bpp, &v->m.size_l, &v->m.endian);
	ft_instruction(v);
	draw(*v);
	mlx_hook(v->m.win_ptr, 2, 0, ft_keys_hook, v);
	mlx_put_image_to_window(v->m.mlx_ptr, v->m.win_ptr, v->m.img_ptr,
				210, 0);
	mlx_loop(v->m.mlx_ptr);
	return (1);
}
