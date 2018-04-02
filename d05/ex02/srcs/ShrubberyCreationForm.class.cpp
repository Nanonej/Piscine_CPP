/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 16:58:51 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/02 19:38:31 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.class.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src) {
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {

	this->_target = rhs._target;
	return *this;
}

// ------------------------------ MEMBER FUNCTION ------------------------------

void	ShrubberyCreationForm::execute(Bureaucrat const & bureaucrat) const {

	AForm::execute(bureaucrat);
	std::string filename(this->_target + "_shrubbery"); // filename.append("_shrubbery");
	std::ofstream file;
	file.exceptions(file.exceptions() | std::ifstream::failbit);
	file.open(filename, std::ifstream::out | std::ifstream::trunc);
	file <<"        - - -"<<std::endl<<"       -        -  -     --    -"<<std::endl<<"    -                 -         -  -"<<std::endl<<"                    -"<<std::endl<<"                   -                --"<<std::endl<<"   -          -            -              -"<<std::endl<<"   -            '-,        -               -"<<std::endl<<"   -              'b      *"<<std::endl<<"    -              '$    #-                --"<<std::endl<<"   -    -           $:   #:               -"<<std::endl<<" --      -  --      *#  @):        -   - -"<<std::endl<<"              -     :@,@):   ,-**:'   -"<<std::endl<<"  -      -,         :@@*: --**'      -   -"<<std::endl<<"           '#o-    -:(@'-@*\"'  -"<<std::endl<<"   -  -       'bq,--:,@@*'   ,*      -  -"<<std::endl<<"              ,p$q8,:@)'  -p*'      -"<<std::endl<<"       -     '  - '@@Pp@@*'    -  -"<<std::endl<<"        -  - --    Y7'.'     -  -"<<std::endl<<"                  :@):."<<std::endl<<"                 .:@:'."<<std::endl<<"               .::(@:."<<std::endl;
	file.close();
}

// -----------------------------------------------------------------------------
