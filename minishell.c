/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:13:15 by oidrissi          #+#    #+#             */
/*   Updated: 2021/10/12 16:44:59 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

// char    *read_input(void)
// {
// 	int bufsize = BUFFER_SIZE;
// 	char	buf[bufsize];
// 	int		place;
// 	int		i;

// 	place = 0;
// 	if (!buffer)
// 	{
// 		write(2, "Allocation failed\n", 18);
// 		exit(EXIR_FAILURE);
// 	}	
// 	while (1)
// 	{
// 		i = getchar();

// 		if (i == EOF || c == '\n')
// 		{
// 			buffer[place] = '\0';
// 			return (buffer);
// 		}
// 		else
// 			buffer[place] = i;
// 		place++;

// 		if (place >= bufsize)
// 		{
// 			bufsize += BUFFER_SIZE;
// 			buffer = realloc(buffer, bufsize);
// 		}
// 	}
// }

// char	*rd_input(void)
// {
// 	char  *ret;
	
	
// 	ret = readline();
// }


#include <readline/readline.h>
#include <string.h>

int main(int argc, char **argv, char **envp)
{
    // t_sh *msh;
    char *read;
    // char *args;
    int to_ex;

    char *prompt = "";
    char *ret;
    // msh = (t_sh *)malloc(sizeof(t_sh));
    to_ex = 1;
    while (to_ex != 0)
    {
        printf("> ");
        ret = readline(prompt);
        if (!strcmp("echo", ret))
            printf("Perfect");
        // args = parse_input(read);
        // to_ex = msh_exec(args);

        // free(read);
        // free(args);        
    }
    return (0);
}