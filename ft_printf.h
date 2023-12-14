/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 02:23:16 by akajjou           #+#    #+#             */
/*   Updated: 2023/12/12 22:37:55 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ptr_len(uintptr_t num);
void	put_ptr(uintptr_t num);
int		ft_print_ptr(uintptr_t ptr);
int		ft_print_unsigned(unsigned int nbr);
int		ft_printnbr(int n);
int		ft_print_hex(unsigned int num, const char format);
char	*ft_strchr(const char *s, int c);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *s);
int		ft_putchar(char c);
int		ft_putstr(char const *s);
char	*ft_strdup(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);

#endif