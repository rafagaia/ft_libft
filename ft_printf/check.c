/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 20:37:59 by rgaia             #+#    #+#             */
/*   Updated: 2017/12/19 16:51:21 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*void	check_flags(const char **format, t_dir *dir)
{
	char	c;

	c = **format;
	if (c == '#' || c == '0' ||
		c == '-' || c == '+' ||
		c == ' ')
		//set flag bit
	*format++;
}*/

void	check_width(const char **format, t_dir *dir)
{
		
}

/*void	check_precision(const char **format, t_dir *dir)
{

}*/

/*
** length directives can have (len >= 1)
*/
/*void	check_length(const char **format, t_dir *dir)
{
	char	c;

	c = **format;
	if (c == 'h' && *(format + 1) == 'h')
		ft_strcpy(dir->length, "hh");
	else if (c == 'h')
		ft_strcpy(dir->length, "h");
	else if (c == 'l' && *(format + 1) == 'l')
		ft_strcpy(dir->length, "ll");
	else if (c == 'l')
		ft_strcpy(dir->length, "l");
	else if (c == 'j')
		ft_strcpy(dir->length, "j");
	else if (c == 'z')
		ft_strcpy(dir->length, "z");
	*format++;
}*/

/*
** (len type == 1)
*/
void	check_type(const char **format, t_dir *dir)
{
	char	c;

	c = **format;
	if (c == 's' || c == 'S' || 
		c == 'c' || c == 'C' ||
		c == 'd' || c == 'D' ||
		c == 'o' || c == 'O' ||
		c == 'u' || c == 'U' ||
		c == 'x' || c == 'X' ||
		c == 'p' ||
		c == 'i')
		dir->type = c;
	*format++;
}
