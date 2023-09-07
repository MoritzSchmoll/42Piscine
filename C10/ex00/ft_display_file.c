/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 09:30:02 by mschmoll          #+#    #+#             */
/*   Updated: 2023/09/05 09:58:23 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<fcntl.h>

int	main(int argc, char **argv)
{
	int		i;
	int		fd;
	char	buff;

	i = 1;
	if (argc < 2)
		write(1, "File name missing.", 18);
	if (argc > 2)
	{
		write(1, "Too many arguments.", 19);
	}
	while (i < argc && argc == 2)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			write(1, "Cannot read file.", 17);
			return (0);
		}
		while (read(fd, &buff, 1) > 0)
			write(1, &buff, 1);
		close(fd);
		i++;
	}
	return (0);
}
