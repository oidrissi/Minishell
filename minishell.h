/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:13:12 by oidrissi          #+#    #+#             */
/*   Updated: 2021/10/08 15:46:53 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H


#include <stdio.h>
#include <readline/readline.h> // char *readline (const char *prompt);

// readline will read a line from the terminal and return it, using prompt as a prompt.

#include <readline/history.h>

#define LSH_RL_BUFSIZE 1024

typedef struct s_sh
{
    char *args;
    char *cmd_l;
    
}   t_sh;

#endif