/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 09:52:44 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/05 10:15:51 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int	main() {

	int					n = 25;
	int					ocurr[] = {1,2,n,3,4};
	int					nooccur[] = {1,2,3,4,5};
	std::list<int>		ocurr_list(ocurr, ocurr+5);
	std::vector<int>	ocurr_vector(ocurr, ocurr+5);
	std::list<int>		nooccurr_list(nooccur, nooccur+5);
	std::vector<int>	nooccurr_vector(nooccur, nooccur+5);

	std::cout << easyfind(ocurr_list, n) << std::endl;
	std::cout << easyfind(ocurr_vector, n) << std::endl;
	std::cout << easyfind(nooccurr_list, n) << std::endl;
	std::cout << easyfind(nooccurr_vector, n) << std::endl;

	return 0;
}
