/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:34:59 by vpotiiko          #+#    #+#             */
/*   Updated: 2023/02/16 14:16:19 by vpotiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "libft/libft.h"
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct pipex
{
	int		infd;
	int		outfd;
	char	*cmd1;
	char	*cmd2;
	char	**cmd1_args;
	char	**cmd2_args;
}	t_pipex;

void	free_strings(t_pipex pipex);
char	**get_path(char	**envp);
char	*get_cmd(char **paths, char *cmd);
void	child(t_pipex pipex, int *end, char **envp);
void	parent(t_pipex pipex, int *end, char **envp);
void	ppipex(t_pipex pipex, char **envp);

#endif