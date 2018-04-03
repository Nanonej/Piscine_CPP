/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 10:21:30 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/03 14:49:57 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <limits>

bool	isInt(std::string str) {

	if (!isdigit(str[0]) && (str[0] != '+' && str[0] != '-')) {
		return false;
	}
	for (size_t i = 1; i < str.size(); i++) {
		if (!isdigit(str[i]) && i != std::string::npos) {
			return false;
		}
	}
	return true;
}

bool	isFloat(std::string str) {

	bool	hadDecimalPoint, hadF = false;

	if (!isdigit(str[0]) && (str[0] != '+' && str[0] != '-')) {
		return false;
	}
	for (size_t i = 1; i < str.size(); i++) {
		if (!isdigit(str[i])) {
			if (str[i] == '.' && !hadDecimalPoint && isdigit(str[i + 1])) {
				hadDecimalPoint = true;
			} else if (str[i] == 'f' && !hadF) {
				hadF = true;
			} else if (i != std::string::npos) {
				return false;
			}
		}
	}
	if (!hadDecimalPoint || !hadF) {
		return false;
	}
	return true;
}

bool	isDouble(std::string str) {

	bool	hadDecimalPoint = false;

	if (!isdigit(str[0]) && (str[0] != '+' && str[0] != '-')) {
		return false;
	}
	for (size_t i = 1; i < str.size(); i++) {
		if (!isdigit(str[i])) {
			if (str[i] == '.' && !hadDecimalPoint && isdigit(str[i + 1])) {
				hadDecimalPoint = true;
			} else if (i != std::string::npos) {
				return false;
			}
		}
	}
	if (!hadDecimalPoint) {
		return false;
	}
	return true;
}

int		main(int const argc, char const **argv) {

	if (argc != 2) {
		std::cerr << "usage: convert scalar(char | int | float | double)" << '\n';
		return -1;
	}

	std::string			toConvert = argv[1];

	if (toConvert.size() == 1 && !isdigit(toConvert[0])) {
		std::cout << "char: ";
		if (isprint(static_cast<char>(toConvert[0]))) {
			std::cout << static_cast<char>(toConvert[0]) << std::endl;
		} else {
			std::cout << "Non displayable" << std::endl;
		}
		std::cout << "int: " << static_cast<int>(toConvert[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(toConvert[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(toConvert[0]) << ".0" << std::endl;
	} else if (isInt(toConvert)) {
		long int n = strtol(toConvert.c_str(), 0, 10);
		std::cout << "char: ";
		if (isprint(static_cast<char>(n))) {
			std::cout << static_cast<char>(n) << std::endl;
		} else if (n <= 127 && n >= 0) {
			std::cout << "Non displayable" << std::endl;
		} else {
			std::cout << "impossible" << std::endl;
		}
		if (n < (-std::numeric_limits<int>::max() - 1) || n > std::numeric_limits<int>::max() || errno == ERANGE) {
			std::cout << "int: impossible" << std::endl;
		} else {
			std::cout << "int: " << static_cast<int>(n) << std::endl;
		}
		if (n < -std::numeric_limits<float>::max() || n > std::numeric_limits<float>::max() || errno == ERANGE) {
			std::cout << "float: impossible" << std::endl;
		} else {
			std::cout << "float: " << static_cast<float>(n) << ".0f" << std::endl;
		}
		if (n < -std::numeric_limits<double>::max() || n > std::numeric_limits<double>::max() || errno == ERANGE) {
			std::cout << "double: impossible" << std::endl;
		} else {
			std::cout << "double: " << static_cast<double>(n) << ".0" << std::endl;
		}
	} else if (isFloat(toConvert)) {
		double nDbl = strtod(toConvert.c_str(), NULL);
		std::cout << "char: ";
		if (isprint(static_cast<char>(nDbl))) {
			std::cout << static_cast<char>(nDbl) << std::endl;
		} else if (nDbl <= 127 && nDbl >= 0) {
			std::cout << "Non displayable" << std::endl;
		} else {
			std::cout << "impossible" << std::endl;
		}
		if (nDbl < (-std::numeric_limits<int>::max() - 1) || nDbl > std::numeric_limits<int>::max() || errno == ERANGE) {
			std::cout << "int: impossible" << std::endl;
		} else {
			std::cout << "int: " << static_cast<int>(nDbl) << std::endl;
		}
		if (nDbl < -std::numeric_limits<float>::max() || nDbl > std::numeric_limits<float>::max() || errno == ERANGE) {
			std::cout << "float: impossible" << std::endl;
		} else {
			std::cout << "float: " << static_cast<float>(nDbl) << "f" << std::endl;
		}
		if (nDbl < -std::numeric_limits<double>::max() || nDbl > std::numeric_limits<double>::max() || errno == ERANGE) {
			std::cout << "double: impossible" << std::endl;
		} else {
			std::cout << "double: " << static_cast<double>(nDbl) << std::endl;
		}
	} else if (isDouble(toConvert)) {
		double nDbl = strtod(toConvert.c_str(), NULL);
		std::cout << "char: ";
		if (isprint(static_cast<char>(nDbl))) {
			std::cout << static_cast<char>(nDbl) << std::endl;
		} else if (nDbl <= 127 && nDbl >= 0) {
			std::cout << "Non displayable" << std::endl;
		} else {
			std::cout << "impossible" << std::endl;
		}
		if (nDbl < (-std::numeric_limits<int>::max() - 1) || nDbl > std::numeric_limits<int>::max() || errno == ERANGE) {
			std::cout << "int: impossible" << std::endl;
		} else {
			std::cout << "int: " << static_cast<int>(nDbl) << std::endl;
		}
		if (nDbl < -std::numeric_limits<float>::max() || nDbl > std::numeric_limits<float>::max() || errno == ERANGE) {
			std::cout << "float: impossible" << std::endl;
		} else {
			std::cout << "float: " << static_cast<float>(nDbl) << "f" << std::endl;
		}
		if (nDbl < -std::numeric_limits<double>::max() || nDbl > std::numeric_limits<double>::max() || errno == ERANGE) {
			std::cout << "double: impossible" << std::endl;
		} else {
			std::cout << "double: " << static_cast<double>(nDbl) << std::endl;
		}
	} else if (toConvert == "-inff" || toConvert == "-inf") {
		std::cout << "Char: impossible" << std::endl << "int: impossible" << std::endl << "float: -inff" << std::endl << "double: -inf" << std::endl;
	} else if (toConvert == "+inff" || toConvert == "+inf") {
		std::cout << "Char: impossible" << std::endl << "int: impossible" << std::endl << "float: inff" << std::endl << "double: inf" << std::endl;
	} else if (toConvert == "nan" || toConvert == "nanf") {
		std::cout << "Char: impossible" << std::endl << "int: impossible" << std::endl << "float: nanf" << std::endl << "double: nan" << std::endl;
	} else {
		std::cerr << "usage: convert scalar(char | int | float | double)" << '\n';
		return -1;		
	}

	return 0;
}
