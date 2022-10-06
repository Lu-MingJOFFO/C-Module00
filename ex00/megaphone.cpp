/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:26:32 by ljoffo            #+#    #+#             */
/*   Updated: 2022/05/02 14:28:47 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	c;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 1;
	while (av[i])
	{
		for (j = 0; av[i][j]; j++)
		{
			c = std::toupper(av[i][j]);
			std::cout << c;
		}
		i++;
	}
	std::cout << std::endl;
	return 0;
}