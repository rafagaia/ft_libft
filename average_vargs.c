/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   average_vargs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 17:28:50 by rgaia             #+#    #+#             */
/*   Updated: 2019/04/20 17:51:05 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

/*
** @in 0: number of values to average / (...): all of the numbers to average 
*/
double		average(int num, ...)
{
	va_list arguments;
	double	sum;

	sum = 0;
	//init args to store all values after num
	va_start(arguments, num);
	for (int x=0; x < num; x++)
		sum += va_arg (arguments, double);
	va_end(arguments);
	return (sum / num);
}

/*
int		main(void)
{
	printf("Average: %f\n", average(3, 30.0, 30.5, 29.2));


	return (0);
}
*/
