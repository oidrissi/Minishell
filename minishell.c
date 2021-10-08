/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oidrissi <oidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:13:15 by oidrissi          #+#    #+#             */
/*   Updated: 2021/10/08 15:49:42 by oidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"



int main(int argc, char **argv, char **envp)
{
    t_sh *msh;
    
    msh = (t_sh *)malloc(sizeof(t_sh));
    while (420)
    {
        wait_for_input(msh);
        
    }
    return (0);
}