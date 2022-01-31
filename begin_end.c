/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   begin_end.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randia-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:59:40 by randia-p          #+#    #+#             */
/*   Updated: 2022/01/26 13:59:40 by randia-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	fail_exe(char *bin, char **matrix_argv, int cm)
{
	free(bin);
	free_matrix(matrix_argv);
	if (cm == 1)
	{
		perror("EXIT_FAILURE_CMD_1");
		exit(-1);
	}
	if (cm == 2)
	{
		perror("EXIT_FAILURE_CMD_1");
		exit(-1);
	}
}

void	end(char **argv, char **envp, int fd_pipe[2])
{
	char	*bin;
	char	**matrix_argv2;
	int		execute;
	int		fd_out;

	close(fd_pipe[1]);
	dup2(fd_pipe[0], STDIN_FILENO);
	fd_out = open(argv[4], O_RDWR | O_CREAT | O_TRUNC | S_IRWXU);
	dup2(fd_out, STDOUT_FILENO);
	matrix_argv2 = ft_split(argv[3], ' ');
	bin = find_bin(matrix_argv2[0], envp);
	close(fd_pipe[0]);
	close(fd_out);
	execute = execve(bin, matrix_argv2, envp);
	if (execute == -1)
		fail_exe(bin, matrix_argv2, 2);
}

void	begin(char **argv, char **envp, int fd_pipe[2])
{
	int		fd_argv1;
	char	*bin;
	char	**matrix_argv1;
	int		execute;

	close(fd_pipe[0]);
	fd_argv1 = open (argv[1], O_RDONLY);
	if (fd_argv1 == -1)
	{
		perror("FILE_IMPUT");
		exit(0);
	}
	dup2(fd_argv1, STDIN_FILENO);
	dup2(fd_pipe[1], STDOUT_FILENO);
	matrix_argv1 = ft_split(argv[2], ' ');
	bin = find_bin(matrix_argv1[0], envp);
	close(fd_argv1);
	close(fd_pipe[1]);
	execute = execve (bin, matrix_argv1, envp);
	if (execute == -1)
		fail_exe(bin, matrix_argv1, 1);
}
