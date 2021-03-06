/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_func.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpucelle <jpucelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/13 16:22:58 by jpucelle          #+#    #+#             */
/*   Updated: 2014/07/13 16:25:09 by jpucelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_parse_sudoku_table(int pos[9][9], char **argv);

int			ft_print_sudoku(int pos[9][9]);

void		ft_set_pos(int *pos, int *orig, int i, int check);
