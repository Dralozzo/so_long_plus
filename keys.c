/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicoter <lnicoter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:25:28 by lnicoter          #+#    #+#             */
/*   Updated: 2023/05/22 23:10:44 by lnicoter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_pressed(int keycode, t_game *game)
{
	if (keycode == 65307)
	{
		mlx_destroy_window(game->mlx, game->win);
		free_map(game);
		exit(1);
	}
	if (keycode == 119 || keycode == 65362)
		game->mv_count += up(game);
	if (keycode == 97 || keycode == 65361)
		game->mv_count += left(game);
	if (keycode == 115 || keycode == 65364)
		game->mv_count += down(game);
	if (keycode == 100 || keycode == 65363)
		game->mv_count += right(game);
	draw_map(game);
	printf("key premuta %d\n",keycode);
	return (0);
}

int	close_game(t_game *game)
{
	mlx_destroy_window(game->mlx, game->win);
	free_map(game);
	exit(1);
}
