/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.hpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 16:57:56 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/02 18:48:49 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_CLASS_HPP
# define SHRUBBERYCREATIONFORM_CLASS_HPP

# include <string>
# include <fstream>
# include "AForm.class.hpp"

class ShrubberyCreationForm : public AForm {

public:

	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm &	operator=(ShrubberyCreationForm const & rhs);

	void	execute(Bureaucrat const & bureaucrat) const;

private:

	std::string	_target;

};

#endif
