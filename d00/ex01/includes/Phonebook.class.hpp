/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 15:05:20 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/26 16:50:27 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "phonebook.hpp"

class	Phonebook {

public:

	bool	used;

	Phonebook();
	void	setData();
	void	printSum(size_t i);
	void	printData();

private:

	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_login;
	std::string	_addr;
	std::string	_email;
	std::string	_phone;
	std::string	_birthdate;
	std::string	_fav_meal;
	std::string	_underwear_color;
	std::string	_secret;

};

#endif
