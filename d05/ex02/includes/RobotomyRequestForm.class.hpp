/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 16:57:56 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/02 18:58:35 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
# define ROBOTOMYREQUESTFORM_CLASS_HPP

# include <string>
# include <fstream>
# include "AForm.class.hpp"

class RobotomyRequestForm : public AForm {

public:

	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm &	operator=(RobotomyRequestForm const & rhs);

	void	execute(Bureaucrat const & bureaucrat) const;

private:

	std::string	_target;

};

#endif
