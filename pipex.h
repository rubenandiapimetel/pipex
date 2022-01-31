#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <sys/wait.h>
# include <errno.h>
# include <sys/types.h>
# include <fcntl.h>
# include <sys/stat.h>
# include "./libft/libft.h"

void	begin(char **argv, char **envp, int fd_pipe[2]);
char	*find_bin(char	*argv, char	**envp);
void	check(int argc);
char	**split_paths(char **envp);
char	*find(char *path_check, char **paths);
void	free_matrix(char **matrix);
void	end(char **argv, char **envp, int fd_pipe[2]);
void	fail_exe(char *bin, char **matrix_argv, int cm);
void	fd_c(int fd_pipe[2]);

#endif
