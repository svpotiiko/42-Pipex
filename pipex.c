/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:34:53 by vpotiiko          #+#    #+#             */
/*   Updated: 2023/02/26 18:12:00 by vpotiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ppipex(t_pipex pipex, char **envp)
//creates a pipe and using fork seperates proc. into child and parent
{
	int		pipe_end[2];
	int		pipe_check;
	int		process;

	pipe_check = pipe(pipe_end);
	if (pipe_check == -1 || pipex.outfd < 0 || read(pipex.infd, 0, 0) < 0)
	{
		perror("Error: cannot create pipe");
		exit(1);
	}
	process = fork();
	if (process == -1)
	{
		perror("Error: cannot create fork");
		exit(1);
	}
	if (process == 0)
		child(pipex, pipe_end, envp);
	else
		parent(pipex, pipe_end, envp);
	close(pipe_end[0]);
	close(pipe_end[1]);
}

int	main(int argc, char **argv, char **envp)
{
	t_pipex		pipex;
	char		**paths;

	if (argc != 5)
	{
		perror("Error: invalid number of arguments");
		exit(1);
	}
	paths = get_path(envp);
	pipex.infd = open(argv[1], O_RDONLY);
	pipex.cmd1_args = ft_split(argv[2], ' ');
	pipex.cmd2_args = ft_split(argv[3], ' ');
	pipex.cmd1 = get_cmd(paths, pipex.cmd1_args[0]);
	pipex.cmd2 = get_cmd(paths, pipex.cmd2_args[0]);
	if (pipex.cmd1 == NULL || pipex.cmd2 == NULL)
	{
		free_strings(pipex);
		perror("Error: command not found");
		exit(1);
	}
	pipex.outfd = open(argv[4], O_RDWR | O_CREAT | O_TRUNC, 0644);
	ppipex(pipex, envp);
	free_strings(pipex);
	return (0);
}
