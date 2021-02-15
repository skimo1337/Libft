/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iet-tibi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 17:55:47 by iet-tibi          #+#    #+#             */
/*   Updated: 2018/11/12 22:51:50 by iet-tibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_chihaja(int fd, char **line, char **stat)
{
	int i;

	i = 0;
	while (stat[fd][i] != '\n' && stat[fd][i] != '\0')
		i++;
	*line = ft_strsub(stat[fd], 0, i);
	if (stat[fd][i] == '\n')
		stat[fd] = ft_strdup(stat[fd] + i + 1);
	else if (stat[fd][i] == '\0')
		stat[fd] = ft_strnew(1);
	return (1);
}

int	get_next_line(const int fd, char **line)
{
	char		buff[BUFF_SIZE + 1];
	int			re;
	char		*join;
	static char *stat[4863];

	if (fd < 0 || line == NULL)
		return (-1);
	if (!stat[fd])
			stat[fd] = ft_strnew(1);
	while ((re = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[re] = '\0';
//		if (!stat[fd])
//			stat[fd] = ft_strnew(1);
		join = ft_strjoin(stat[fd], buff);
		stat[fd] = join;
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (re < 0)
		return (-1);
	else if (re == 0 && (stat[fd][0] == '\0' || stat[fd] == NULL))
		return (0);
	return (ft_chihaja(fd, line, stat));
}
/*
int main(int argc, char **argv)
{
	char *line;
	int	fd;
	int fd2;
	int fd3;

	fd = open(argv[1], O_RDONLY);
	ft_putstr("------------ FD1 --------------\n");
	while (get_next_line(fd, &line) > 0)
	{
		ft_putstr(line);
		ft_putchar('\n');
	}
	//	ft_putstr(line);
	//	ft_putchar('\n');
	if (argc == 3)
	{
		ft_putstr("------------ FD2 --------------\n");
		fd2 = open(argv[2], O_RDONLY);
		while (get_next_line(fd2, &line) > 0)
		{
			ft_putstr(line);
			ft_putchar('\n');
		}
	}
																// test1 test2 THEN test1
	fd2 = open(argv[2], O_RDONLY);
	fd3 = open(argv[3], O_RDONLY);
	get_next_line(fd2, &line);
	ft_putstr(line);
	ft_putchar('\n');
	get_next_line(fd3, &line);
	ft_putstr(line);
	ft_putchar('\n');
	get_next_line(fd2, &line);
	ft_putstr(line);
	ft_putchar('\n');

 	if (argc == 4)
	{
		ft_putstr("------------ FD2 --------------\n");
		fd2 = open(argv[2], O_RDONLY);
		while (get_next_line(fd2, &line) > 0)
		{
			ft_putstr(line);
			ft_putchar('\n');
		}
		ft_putstr("------------ FD3 --------------\n");
		fd3 = open(argv[3], O_RDONLY);
		while (get_next_line(fd3, &line) > 0)
		{
			ft_putstr(line);
			ft_putchar('\n');
		}
	}

	return (0);
}
*/
