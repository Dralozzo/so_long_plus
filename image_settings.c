/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_settings.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicoter <lnicoter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 17:01:35 by lnicoter          #+#    #+#             */
/*   Updated: 2023/05/31 18:40:33 by lnicoter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_wcp(t_game *game, int riga, int colonna)
{
	if (game->map[riga][colonna] == WALL)
	{
		mlx_put_image_to_window(game->mlx, game->win, game->img_wall,
			colonna * 64, riga * 64);
	}
	if (game->map[riga][colonna] == EMPTY)
	{
		mlx_put_image_to_window(game->mlx, game->win, game->img_0,
			colonna * 64, riga * 64);
	}
	if (game->map[riga][colonna] == PLAYER)
	{
		mlx_put_image_to_window(game->mlx, game->win, game->img_player,
			colonna * 64, riga * 64);
		game->player_stats.x = riga;
		game->player_stats.y = colonna;
	}
	if (game->map[riga][colonna] == COLLECTIBLE)
	{
		mlx_put_image_to_window(game->mlx, game->win, game->img_collect,
			colonna * 64, riga * 64);
	}
	else if (game->map[riga][colonna] == 'p')
	{
		mlx_put_image_to_window(game->mlx, game->win, game->bows_tlp,
			colonna * 64, riga * 64);
	}
}

void	set_eenem(t_game *game, int riga, int colonna)
{
	if (game->map[riga][colonna] == EXIT)
	{
		mlx_put_image_to_window(game->mlx, game->win, game->img_exit,
			colonna * 64, riga * 64);
	}
	if (game->map[riga][colonna] == ENEMY_S)
	{
		game->enemy.x = riga;
		game->enemy.y = colonna;
		game->enemy_num++;
	}
}

void	set_tlp(t_game *game, int riga, int colonna)
{
	if (game->map[riga][colonna] == TLP && (!game->tlp_x1 && !game->tlp_y1))
	{
		mlx_put_image_to_window(game->mlx, game->win, game->img_tlp,
			colonna * 64, riga * 64);
		game->tlp_x1 = riga;
		game->tlp_y1 = colonna;
		printf("Teletrasporto 1 trovato posizoione sulla griglia: x %d y %d\n", game->tlp_x1, game->tlp_y1);
	}
	else if (game->map[riga][colonna] == TLP && (!game->tlp_x2 && !game->tlp_y2))
	{
		mlx_put_image_to_window(game->mlx, game->win, game->img_tlp,
		colonna * 64, riga * 64);
		game->tlp_x2 = riga;
		game->tlp_y2 = colonna;
		printf("Teletrasporto 2 trovato posizoione sulla griglia: x %d y %d\n", game->tlp_x2, game->tlp_y2);
	}
	else if (game->map[riga][colonna] == TLP && (!game->tlp_x3 && !game->tlp_y3))
	{
		mlx_put_image_to_window(game->mlx, game->win, game->img_tlp,
		colonna * 64, riga * 64);
		game->tlp_x3 = riga;
		game->tlp_y3 = colonna;
		printf("Teletrasporto 3 trovato posizoione sulla griglia: x %d y %d\n", game->tlp_x3, game->tlp_y3);
	}
	else if (game->map[riga][colonna] == TLP && (!game->tlp_x4 && !game->tlp_y4))
	{
		mlx_put_image_to_window(game->mlx, game->win, game->img_tlp,
		colonna * 64, riga * 64);
		game->tlp_x4 = riga;
		game->tlp_y4 = colonna;
		printf("Teletrasporto 4 trovato posizoione sulla griglia: x %d y %d\n", game->tlp_x4, game->tlp_y4);
	}
	else if (game->map[riga][colonna] == TLP && (!game->tlp_x5 && !game->tlp_y5))
	{
		mlx_put_image_to_window(game->mlx, game->win, game->img_tlp,
		colonna * 64, riga * 64);
		game->tlp_x5 = riga;
		game->tlp_y5 = colonna;
		printf("Teletrasporto 5 trovato posizoione sulla griglia: x %d y %d\n", game->tlp_x5, game->tlp_y5);
	}
	else if (game->map[riga][colonna] == TLP && (!game->tlp_x6 && !game->tlp_y6))
	{
		mlx_put_image_to_window(game->mlx, game->win, game->img_tlp,
		colonna * 64, riga * 64);
		game->tlp_x6 = riga;
		game->tlp_y6 = colonna;
		printf("Teletrasporto 6 trovato posizoione sulla griglia: x %d y %d\n", game->tlp_x6, game->tlp_y6);
	}
	else if (game->map[riga][colonna] == TLP && (!game->tlp_x7 && !game->tlp_y7))
	{
		mlx_put_image_to_window(game->mlx, game->win, game->img_tlp,
		colonna * 64, riga * 64);
		game->tlp_x7 = riga;
		game->tlp_y7 = colonna;
		printf("Teletrasporto 7 trovato posizoione sulla griglia: x %d y %d\n", game->tlp_x7, game->tlp_y7);
	}
}
