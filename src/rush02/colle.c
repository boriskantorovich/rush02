/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfisher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 13:06:22 by dfisher           #+#    #+#             */
/*   Updated: 2018/09/09 13:06:25 by dfisher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		*is_rectangle(char *tmp)
{
	int x;
	int i;
	int flag;
	static int result[3];
	
	i = 0;
	x = 0;
	flag = 0;
	while (tmp[i] != '\0')
	{
		if ((flag == 1) && ((i + 1) % x == 0) && (tmp[i] != '\n'))
			result[0] = 0;
		if ((flag == 1) && ((i + 1) % x != 0) && (tmp[i] == '\n'))
			result[0] = 0;
		if (tmp[i] == '\n' && flag == 0)
		{
			x = i + 1;
			result[1] = x;
			flag = 1;
		}
		i++;
	}
	if (flag == 1 && (i % x == 0) && (tmp[i-1] == '\n'))
	{
		result[0] = 1;
		result[2] = i / x;
	}
	else
		result[0] = 0;
	return (result);
}

	/*void	is_rush00(char *tmp)
{
	
	int x;
	int i;
	int flag;

	i = 0;
	x = 0;
	flag = 0;
	while (tmp[i] != '\0')
	{
		if ((flag == 1) && ((i + 1) % x == 0) && (tmp[i] != '\n'))
			return (0);
		if ((flag == 1) && ((i + 1) % x != 0) && (tmp[i] == '\n'))
			return (0);
		if (tmp[i] == '\n' && flag == 0)
		{
			x = i + 1;
			flag = 1;
		}
		i++;
	}
	if (flag == 1 && (i % x == 0) && (tmp[i-1] == '\n'))
		return (1);
	else
		return (0);

	i = 0;
	while (tmp[i] != '\0')
	{
		if (tmp[i] == 'o')
	{
		write(1, "[rush-00]\n", 19);
		
	}
		else if (buffer[0] == 'A')
		{
			write(1, "[rush-01]\n", 36);
		}
	 }
}
	*/

void	colle(void)
{
	char	*buffer;
	char	*tmp;
	int		i;

	i = 0;
	buffer = malloc(sizeof(char) * 1);
	tmp = (char *)malloc(sizeof(char) * 1);
	while (read(STDIN_FILENO, buffer, 1))
	{
		tmp[i] = buffer[0];
		write(1, &tmp[i], 1);
		i++;
	}
	free(STDIN_FILENO);
	
	if (is_rectangle(tmp)[0])
		write(1, "THIS IS RECTANGLE\n", 36);
	
}
