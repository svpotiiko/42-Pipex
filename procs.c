/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   procs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:35:04 by vpotiiko          #+#    #+#             */
/*   Updated: 2023/02/26 13:13:25 by vpotiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	child(t_pipex pipex, int *end, char **envp)
//duplicates infd into standard input fd, handles cmd1
{
	dup2(pipex.infd, 0);
	dup2(end[1], 1);
	close(end[0]);
	close(pipex.infd);
	execve(pipex.cmd1, pipex.cmd1_args, envp);
}

void	parent(t_pipex pipex, int *end, char **envp)
//handles cmd2
{
	dup2(pipex.outfd, 1);
	dup2(end[0], 0);
	close(end[1]);
	close(pipex.outfd);
	execve(pipex.cmd2, pipex.cmd2_args, envp);
}
