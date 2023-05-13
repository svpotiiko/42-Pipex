/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_path.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpotiiko <vpotiiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:36:35 by vpotiiko          #+#    #+#             */
/*   Updated: 2023/02/26 12:25:19 by vpotiiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include "libft/libft.h"

char	**get_path(char	**envp)
//finds path in the environemnt; splits on each ":"
{
	int		a;

	a = 0;
	while (envp[a])
	{
		if (!ft_strncmp(envp[a], "PATH", 4))
			return (ft_split(envp[a] + 5, ':'));
		a++;
	}
	return (NULL);
}

char	*get_cmd(char **paths, char *cmd)
//combines command with the path
{
	char	*temp;
	char	*cmd_path;

	if (access(cmd, F_OK) == 0)
		return (cmd);
	if (!paths)
		return (NULL);
	while (*paths)
	{
		temp = ft_strjoin(*paths, "/");
		cmd_path = ft_strjoin(temp, cmd);
		free(temp);
		if (access(cmd_path, F_OK) == 0)
			return (cmd_path);
		free(cmd_path);
		paths++;
	}
	return (NULL);
}
