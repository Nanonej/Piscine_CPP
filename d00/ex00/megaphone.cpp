/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 11:58:54 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/26 12:28:25 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char **argv) {

	if (argc <= 1) {

		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

	} else {

		for (int i = 1; i < argc; i++) {

			for (size_t j = 0; argv[i][j] ; j++) {

				if (argv[i][j] >= 'a' && argv[i][j] <= 'z') {

					argv[i][j] -= 32;

				}

			}

			std::cout << argv[i];

		}

		std::cout << std::endl;

	}

	return (0);
}
