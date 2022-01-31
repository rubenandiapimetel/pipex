/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randia-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:00:08 by randia-p          #+#    #+#             */
/*   Updated: 2022/01/26 14:00:08 by randia-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	fd_c(int fd_pipe[2])
{
	close(fd_pipe[0]);
	close(fd_pipe[1]);
}

int	main(int argc, char **argv, char **envp)
{
	int		fd_pipe[2];
	int		p;
	int		status;

	check(argc);
	pipe(fd_pipe);
	p = fork();
	if (p == -1)
		perror("FORK_ERROR");
	if (p == 0)
		begin(argv, envp, fd_pipe);
	else
	{
		p = fork();
		if (p == -1)
			perror("FORK_ERROR");
		if (p == 0)
			end(argv, envp, fd_pipe);
		else
			fd_c(fd_pipe);
	}	
	wait(&status);
	wait(&status);
	return (0);
}
