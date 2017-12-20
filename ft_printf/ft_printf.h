/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 14:07:25 by rgaia             #+#    #+#             */
/*   Updated: 2017/12/19 16:53:05 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft.h"

typedef struct		s_fmt
{
	size_t			len_ordchar;
	size_t			len_directives;
	int				length;
	char			**output;
}					t_fmt;

typedef struct		s_dir
{
	int				flags;
	int				min_width;
	int				precision;
	int				length[3]; //used to offset format to after directive
	char			type;
	void			*output; //result to be concatenated to t_fmt->output
}					t_dir;

void	check_type(const char **format, t_dir *dir);
void	check_precision(const char **format, t_dir *dir);
void	check_width(const char **format, t_dir *dir);
void	check_length(const char **format, t_dir *dir);
void	check_flags(const char **format, t_dir *dir);

#endif
