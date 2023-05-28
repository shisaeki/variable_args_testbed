/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shisaeki <shisaeki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 20:19:42 by shisaeki          #+#    #+#             */
/*   Updated: 2023/05/28 10:42:07 by shisaeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

void	func(size_t n, char *p, ...)
{
	char	cval;
	int		ival;
	float	fval;
	char	*sval;

	//variable args declared
	va_list	ap;
	//start reading va; the second arg is the last one before ...
	va_start(ap, p);

	for (size_t i = 1; i <= n; i++)
	{
		printf("%zu: ", i);
		switch(*p)
		{
			case 'c':
				// type va_arg(va_list, type)
				cval = va_arg(ap, int);
				printf("%c\n", cval);
				break;
			case 'i':
				ival = va_arg(ap, int);
				printf("%d\n", ival);
				break;
			case 'f':
				fval = va_arg(ap, double);
				printf("%f\n", fval);
				break;
			case 's':
				sval = va_arg(ap, char *);
				printf("%s\n", sval);
				break;
		}
		p++;
	}
}

int main()
{
	size_t	i;
	char	*p;

	i = 3;
	p = "ifs";
	func(i, p, 20, 0.34, "Hello");

	return (0);
}
