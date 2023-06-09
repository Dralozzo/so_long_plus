/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tlp_behaviour.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicoter <lnicoter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:41:21 by lnicoter          #+#    #+#             */
/*   Updated: 2023/06/02 22:01:28 by lnicoter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	tlp_set(t_game *game)
{
	game->tlp_x1 = 0;
	game->tlp_y1 = 0;
	game->tlp_x2 = 0;
	game->tlp_y2 = 0;
	game->tlp_x3 = 0;
	game->tlp_y3 = 0;
	game->tlp_x4 = 0;
	game->tlp_y4 = 0;
	game->tlp_x5 = 0;
	game->tlp_y5 = 0;
	game->tlp_x6 = 0;
	game->tlp_y6 = 0;
	game->tlp_x7 = 0;
	game->tlp_y7 = 0;
}

void	tlp_behaviour(t_game *game, int plx, int ply)
{
	if ((game->tlp_x1 == plx) && (game->tlp_y1 == ply))
	{
		game->map[game->player_stats.x][game->player_stats.y] = '0';
		game->map[game->tlp_x2][game->tlp_y2 + 1] = 'P';
		game->player_stats.x = game->tlp_x2;
		game->player_stats.y = game->tlp_y2;
	}
	else if ((game->tlp_x2 == plx) && (game->tlp_y2 == ply))
	{
		game->map[game->player_stats.x][game->player_stats.y] = '0';
		game->map[game->tlp_x1][game->tlp_y1 + 1] = 'P';
		game->player_stats.x = game->tlp_x1;
		game->player_stats.y = game->tlp_y1;
	}
	else if ((game->tlp_x3 == plx) && (game->tlp_y3 == ply))
	{
		game->map[game->player_stats.x][game->player_stats.y] = '0';
		game->map[game->tlp_x4][game->tlp_y4 + 1] = 'P';
		game->player_stats.x = game->tlp_x4;
		game->player_stats.y = game->tlp_y4 + 1;
	}
	tlp_behaviour2(game, plx, ply);
}

void	tlp_behaviour2(t_game *game, int plx, int ply)
{
	if ((game->tlp_x4 == plx) && (game->tlp_y4 == ply))
	{
		game->map[game->player_stats.x][game->player_stats.y] = '0';
		game->map[game->tlp_x3][game->tlp_y3 + 1] = 'P';
		game->player_stats.x = game->tlp_x3;
		game->player_stats.y = game->tlp_y3 + 1;
	}
	else if ((game->tlp_x5 == plx) && (game->tlp_y5 == ply))
	{
		game->map[game->player_stats.x][game->player_stats.y] = '0';
		game->map[game->tlp_x6][game->tlp_y6 + 1] = 'P';
		game->player_stats.x = game->tlp_x6;
		game->player_stats.y = game->tlp_y6 + 1;
	}
	tlp_brhaviour3(game, plx, ply);
}

void	tlp_brhaviour3(t_game *game, int plx, int ply)
{
	if ((game->tlp_x6 == plx) && (game->tlp_y6 == ply))
	{
		game->map[game->player_stats.x][game->player_stats.y] = '0';
		game->map[game->tlp_x7][game->tlp_y7 + 1] = 'P';
		game->player_stats.x = game->tlp_x5;
		game->player_stats.y = game->tlp_y5 + 1;
	}
	else if ((game->tlp_x7 == plx) && (game->tlp_y7 == ply))
	{
		game->map[game->player_stats.x][game->player_stats.y] = '0';
		game->map[game->tlp_x1][game->tlp_y1 + 1] = 'P';
		game->player_stats.x = game->tlp_x1;
		game->player_stats.y = game->tlp_y1 + 1;
	}
}

