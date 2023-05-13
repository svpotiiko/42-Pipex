/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freestr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:34:50 by vpotiiko          #+#    #+#             */
/*   Updated: 2023/02/15 18:59:48 by vpotiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	free_strings(t_pipex pipex)
{
	free(pipex.cmd1_args);
	free(pipex.cmd2_args);
	if (pipex.cmd1 != NULL)
		free(pipex.cmd1);
	if (pipex.cmd2 != NULL)
		free(pipex.cmd2);
}
