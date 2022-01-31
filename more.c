/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randia-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:59:48 by randia-p          #+#    #+#             */
/*   Updated: 2022/01/26 13:59:48 by randia-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	check(int argc)
{
	if (argc > 5)
	{
		perror("U have written too many");
		exit(EXIT_FAILURE);
	}
	if (argc < 5)
	{
		perror("U have written few");
		exit(EXIT_FAILURE);
	}
}

char	**split_paths(char **envp)
{
	char	**paths;
	int		n;
	char	*path_one;

	n = 0;
	while (envp[n])
	{
		if (!ft_strncmp(envp[n], "PATH=", 5))
			path_one = (envp[n]);
		n++;
	}
	paths = ft_split(ft_strchr(path_one, '/'), ':');
	return (paths);
}

char	*find(char *path_check, char **matrix_argv)
{
	int		fd;

	fd = open(path_check, O_RDONLY);
	if (fd >= 0)
	{
		free_matrix(matrix_argv);
		close(fd);
		return (path_check);
	}
	return (NULL);
}

void	free_matrix(char **matrix)
{
	int		n;

	n = 0;
	while (matrix[n])
		free(matrix[n++]);
	free(matrix);
}

char	*find_bin(char *argv, char **envp)
{
	char	**matrix_argv;
	char	**paths;
	int		n;
	char	*path_check;

	matrix_argv = ft_split(argv, ' ');
	paths = split_paths(envp);
	while (paths[n])
	{
		path_check = ft_strjoin(ft_strjoin(paths[n], "/"), matrix_argv[0]);
		if (find(path_check, matrix_argv) != NULL)
		{
			free(paths);
			return (path_check);
		}
		n++;
		free(path_check);
	}
	free_matrix(paths);
	return(NULL);
}
