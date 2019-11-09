/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:45:43 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/25 18:45:47 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int		*fd;
	char	*ans;
	int     i, x;
	int 	rand_fd;

	i = 0;
	ans = NULL;
	srand(time(0));
	printf("There are %i files\n", argc - 1);
	if (argc > 1)
	{
		fd = (int*)malloc(sizeof(int) * argc);
		while (i < argc - 1)
		{
			fd[i] = open(argv[i + 1], O_RDONLY);
			if (fd[i] != -1)
			{
				printf("%i) ..... Reading file '%s' .....\n", i + 1, argv[i + 1]);
				while (get_next_line(fd[i], &ans))
				{
					printf("%s\n", ans);
					free(ans);
				}
			}
			else
				printf("An error occurred while opening the file - %s\n", argv[i + 1]);
			close(fd[i]);
			i++;
		}
//		while (i < argc - 1)
//		{
//			fd[i] = open(argv[i + 1], O_RDONLY);
//			i++;
//		}
//		i = 1;
//		while (i)
//		{
//			i = 0;
//			while (rand_fd != -1 && i < 20)
//			{
//				rand_fd = fd[rand() % (argc - 1)];
//				i++;
//			}
//			x = get_next_line(rand_fd, &ans);
//			printf("%i: %s\n", rand_fd, ans);
//			free(ans);
//		}
//		i = 0;
//		while (i < argc - 1)
//		{
//			close(fd[i]);
//			i++;
//		}
	}
	return (0);
}

