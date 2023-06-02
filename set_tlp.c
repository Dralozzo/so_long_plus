/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_tlp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicoter <lnicoter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:14:56 by lnicoter          #+#    #+#             */
/*   Updated: 2023/06/02 20:10:02 by lnicoter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_tlp(t_game *game, int riga, int colonna)
{
	if ((game->map[riga][colonna] == TLP && (!game->tlp_x1 && !game->tlp_y1))
		&& game->insert_flag == 0)
	{
		mlx_put_image_to_window(game->mlx, game->win, game->img_tlp,
			colonna * 64, riga * 64);
		game->tlp_x1 = riga;
		game->tlp_y1 = colonna;
		game->insert_flag++;
	}
	else if ((game->map[riga][colonna] == TLP && (!game->tlp_x2 && !game->tlp_y2))
			&& game->insert_flag == 1)
	{
		mlx_put_image_to_window(game->mlx, game->win, game->img_tlp,
		colonna * 64, riga * 64);
		game->tlp_x2 = riga;
		game->tlp_y2 = colonna;
		game->insert_flag++;
	}
	else if ((game->map[riga][colonna] == TLP && (!game->tlp_x3 && !game->tlp_y3))
			&& game->insert_flag == 2)
	{
		mlx_put_image_to_window(game->mlx, game->win, game->img_tlp,
		colonna * 64, riga * 64);
		game->tlp_x3 = riga;
		game->tlp_y3 = colonna;
		game->insert_flag++;
	}
	else if ((game->map[riga][colonna] == TLP && (!game->tlp_x4 && !game->tlp_y4))
			&& game->insert_flag == 3)
	{
		mlx_put_image_to_window(game->mlx, game->win, game->img_tlp,
		colonna * 64, riga * 64);
		game->tlp_x4 = riga;
		game->tlp_y4 = colonna;
		game->insert_flag++;
	}
	else if ((game->map[riga][colonna] == TLP && (!game->tlp_x5 && !game->tlp_y5))
			&& game->insert_flag == 4)
	{
		mlx_put_image_to_window(game->mlx, game->win, game->img_tlp,
		colonna * 64, riga * 64);
		game->tlp_x5 = riga;
		game->tlp_y5 = colonna;
		game->insert_flag++;
	}
	else if ((game->map[riga][colonna] == TLP && (!game->tlp_x6 && !game->tlp_y6))
			&& game->insert_flag == 5)
	{
		mlx_put_image_to_window(game->mlx, game->win, game->img_tlp,
		colonna * 64, riga * 64);
		game->tlp_x6 = riga;
		game->tlp_y6 = colonna;
		game->insert_flag++;
	}
	else if ((game->map[riga][colonna] == TLP && (!game->tlp_x7 && !game->tlp_y7))
			&& game->insert_flag == 6)
	{
		mlx_put_image_to_window(game->mlx, game->win, game->img_tlp,
		colonna * 64, riga * 64);
		game->tlp_x7 = riga;
		game->tlp_y7 = colonna;
	}
}
