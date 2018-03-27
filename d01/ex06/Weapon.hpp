/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 20:53:45 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/27 21:31:20 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {

public:

	Weapon(std::string type);
	~Weapon();

	std::string const &	getType() const;
	void				setType(std::string type);

private:

	std::string	_type;

};

#endif
