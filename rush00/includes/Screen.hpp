/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Screen.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 10:05:47 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/01 10:30:57 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCREEN_HPP
# define SCREEN_HPP

#include <locale.h>
#include <ncurses.h>
#include <string>
#include <iostream>

class Screen {

public:

	Screen();
	Screen(Screen const & src);
	virtual ~Screen();

	Screen &	operator=(Screen const & rhs);

	void	startMenu();

private:

};

#endif
