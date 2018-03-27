/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 17:51:45 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/27 17:56:55 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main() {

	std::string		salutation = "HI THIS IS BRAIN";
	std::string		*salutPtr = &salutation;
	std::string		&salutRef = salutation;

	std::cout << "Print ptr: " << *salutPtr << std::endl;
	std::cout << "Print ref: " << salutRef << std::endl;

	return 0;
}
