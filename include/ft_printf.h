/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osousa-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 13:12:23 by osousa-d          #+#    #+#             */
/*   Updated: 2025/08/14 13:12:26 by osousa-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

int	ft_printf(const char *, ...);
int	ft_print_char(char c);
int	ft_print_str(char *s);
int	ft_print_pointer(void *ptr);
int	ft_print_nbr(long nb);
int	ft_print_hex(unsigned int n, int fd, int uppercase);
int	ft_print_porcent(void);

#endif