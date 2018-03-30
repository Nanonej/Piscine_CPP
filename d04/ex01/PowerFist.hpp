/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 16:00:10 by aridolfi          #+#    #+#             */
/*   Updated: 2018/03/30 16:50:37 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <string>
#include "AWeapon.hpp"

class PowerFist : public AWeapon {

public:

	PowerFist();
	PowerFist(PowerFist const & src);
	~PowerFist();

	PowerFist &	operator=(PowerFist const & rhs);

	virtual void	attack() const;

private:

};

#endif
