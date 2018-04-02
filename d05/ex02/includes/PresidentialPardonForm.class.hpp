/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.hpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 16:57:56 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/02 19:11:14 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
# define PRESIDENTIALPARDONFORM_CLASS_HPP

# include <string>
# include <fstream>
# include "AForm.class.hpp"

class PresidentialPardonForm : public AForm {

public:

	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm &	operator=(PresidentialPardonForm const & rhs);

	void	execute(Bureaucrat const & bureaucrat) const;

private:

	std::string	_target;

};

#endif
