/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 19:47:07 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/02 20:05:19 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP

# include <string>
# include "AForm.class.hpp"
# include "PresidentialPardonForm.class.hpp"
# include "RobotomyRequestForm.class.hpp"
# include "ShrubberyCreationForm.class.hpp"

class Intern {

public:

	Intern();
	Intern(Intern const & src);
	virtual ~Intern();

	Intern &	operator=(Intern const & rhs);

	AForm *	makeForm(std::string formName, std::string formTarget);

private:

};

#endif
