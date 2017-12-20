/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 10:35:46 by rgaia             #+#    #+#             */
/*   Updated: 2017/12/19 16:59:36 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include <stdarg.h>

static t_dir	*init_dir(t_dir *init)
{
	t_dir	*dir;

	dir = ft_memalloc(sizeof(t_dir));
	
	*dir = (t_dir) {0, 0, 0, 0, 0, NULL};
	/*dir->flags = 0;
	dir->min_width = 0;
	dir->precision = 0;
	dir->type = 0;
	dir->length = 0;
	dir->output = NULL*/
	return (dir);
}

/*
** @out: list containing with elements as t_dir struct with parameters 
**		describing each directive
** TODO: check if format is not null before entering new check, or check
**		 it within checks
*/
static t_list	*init_directives(const char *format)
{
	char	ch;
	t_list	*l_dir;
	t_dir	*dir;

	while ((ch = *format++) != '\0')
	{
		if (ch == '%')
		{
			dir = init_dir();
			//check_flags(&format, dir);
			//check_width(&format, dir);
			//check_precision(&format, dir);
			//check_length(&format, dir);
			check_type(&format, dir);
			(dir->valid == 1 ? 
			 ft_lstadd_back(&l_dir, ft_lstnew(dir, sizeof(t_dir))) : 0);
		}
	}
	return (l_dir);
}

void	t_dir_free(t_dir **dir)
{
	ft_strdel(&((*dir)->output));	
}
/*
** Handle conversions: sScCdDpioOuUxX
** First pass:
** - Verify they're good directives [later]
** - Set t_fmt to hold general information about *format
**		- length of natural characters
** - Set list of structs containing information about each directive
** Second pass:
** - Evaluate each directive and store their respective output and output
** 	 length on list element
** - Set t_fmt struct for general information of printf function:
**		- sum of lengths of output field of each directive
**			- determines output buffer size
** - Now that we have evaluated directives, have respective lengths, we allocate
** 	 output buffer
** Third pass:
** - Construct output buffer by concatenating natural characters to output from
**   each element of directive struct
** - Output the buffer
** 
*/

int		ft_printf(const char *format, ...)
{

//	t_fmt *fmt;
	int		result;
	t_list	*l_dir;
//	va_list	args;

	result = 0;
	// *** FIRST PASS ***
	/*
	if ((fmt = validate(format)) == NULL)
		return (0);
	*/
	l_dir = init_directives(format);

	// *** SECOND PASS ***
	/*
	va_start(args, format);
	evaluate_directives(l_dir, args);
	va_end(args);
	*/

	// *** THIRD PASS ***
	/*
	build_output(l_dir, fmt);
	ft_putstr(fmt->output);
	result = fmt->length;
	free_fmt(fmt);*/
	ft_lstdel(&l_dir, &t_dir_free); //TODO: this is likely wrong
	return (result);
}
