/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicoter <lnicoter@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:31:24 by lnicoter          #+#    #+#             */
/*   Updated: 2023/06/02 19:42:49 by lnicoter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	draw_map(t_game *game)
{
	int	riga;
	int	colonna;

	riga = 0;
	colonna = 0;
	check_img(game);
	while (game->map[riga])
	{
		colonna = 0;
		while (game->map[riga][colonna])
		{
			set_wcp(game, riga, colonna);
			set_eenem(game, riga, colonna);
			set_tlp(game, riga, colonna);
			//set_tlp2(game, riga, colonna);
			//set_tlp3(game, riga, colonna);
			colonna++;
		}
		riga++;
	}
	game->no_collect = 1;
	display_moves(game);
	return (0);
}
