/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:13:12 by oidrissi          #+#    #+#             */
/*   Updated: 2021/10/11 17:00:10 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H


#include <stdio.h>
#include <readline/readline.h> // char *readline (const char *prompt);

// readline will read a line from the terminal and return it, using prompt as a prompt.

#include <readline/history.h>

#define BUFFER_SIZE 1024

typedef struct s_redir
{
	char	*file;
	int		type;
	struct s_redir *next;
}	t_redir;

typedef struct s_sh
{
    char **args;
    t_redir red;
    struct s_sh *next;
	struct s_sh *prev;
}   t_sh;

#endif