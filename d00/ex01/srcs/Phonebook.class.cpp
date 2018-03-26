/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 15:25:52 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/26 17:44:21 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook() : used(false) {}

void	Phonebook::setData() {

	this->used = true;

	std::cout << "first name: ";
	std::getline(std::cin, this->_firstname);
	std::cout << "last name: ";
	std::getline(std::cin, this->_lastname);
	std::cout << "nickname: ";
	std::getline(std::cin, this->_nickname);
	std::cout << "login: ";
	std::getline(std::cin, this->_login);
	std::cout << "postal address: ";
	std::getline(std::cin, this->_addr);
	std::cout << "email address: ";
	std::getline(std::cin, this->_email);
	std::cout << "phone number: ";
	std::getline(std::cin, this->_phone);
	std::cout << "birthday date: ";
	std::getline(std::cin, this->_birthdate);
	std::cout << "favorite meal: ";
	std::getline(std::cin, this->_fav_meal);
	std::cout << "underwear color: ";
	std::getline(std::cin, this->_underwear_color);
	std::cout << "darkest secret: ";
	std::getline(std::cin, this->_secret);

}

void	Phonebook::printSum(size_t i) {

	std::string tmp;

	std::cout << "|" << std::setw(10) << i << std::setw(1) << "|";

	tmp = this->_firstname;
	if (tmp.size() > 10) {
		tmp.resize(9);
		tmp.append(".");
	}
	std::cout << std::setw(10) << tmp << std::setw(1) << "|";

	tmp = this->_lastname;
	if (tmp.size() > 10) {
		tmp.resize(9);
		tmp.append(".");
	}
	std::cout << std::setw(10) << tmp << std::setw(1) << "|";

	tmp = this->_nickname;
	if (tmp.size() > 10) {
		tmp.resize(9);
		tmp.append(".");
	}
	std::cout << std::setw(10) << tmp << std::setw(1) << "|";

	std::cout << std::endl;

}

void	Phonebook::printData() {

	std::cout << "first name: " << this->_firstname << std::endl;
	std::cout << "last name: " << this->_lastname << std::endl;
	std::cout << "nickname: " << this->_nickname << std::endl;
	std::cout << "login: " << this->_login << std::endl;
	std::cout << "postal address: " << this->_addr << std::endl;
	std::cout << "email address: " << this->_email << std::endl;
	std::cout << "phone number: " << this->_phone << std::endl;
	std::cout << "birthday date: " << this->_birthdate << std::endl;
	std::cout << "favorite meal: " << this->_fav_meal << std::endl;
	std::cout << "underwear color: " << this->_underwear_color << std::endl;
	std::cout << "darkest secret: " << this->_secret << std::endl;

}
