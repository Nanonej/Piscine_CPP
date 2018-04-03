/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:54:06 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/03 15:45:39 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>

struct Raw {
	char	p1[8];
	int		p2;
	char	p3[8];
};

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

char	randAlphaNum() {
	std::string const alphaNum = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	return alphaNum[rand() % 63];
}

void	*serialize() {
	Raw *raw = new Raw();
	srand(time(NULL));

	for (size_t i = 0; i < 8; i++) {
		raw->p1[i] = randAlphaNum();
	}
	raw->p2 = rand();
	for (size_t i = 0; i < 8; i++) {
		raw->p3[i] = randAlphaNum();
	}
	return reinterpret_cast<void *>(raw);
}

Data	*deserialize(void * raw) {
	Raw		*getraw = reinterpret_cast<Raw *>(raw);
	Data	*data = new Data();

	data->s1 = std::string(getraw->p1, 0, 8);
	data->n = getraw->p2;
	data->s2 = std::string(getraw->p3, 0, 8);

	return data;
}

int		main() {

	void * raw_data = serialize();
	char * char_raw_data = reinterpret_cast<char*>(raw_data);

	try {
		std::cout << ":::Serialized Data:::" << std::endl;
		std::cout << "Size:     " << sizeof(Raw) << std::endl;
		std::cout << "All Bits: " << std::string(char_raw_data, 0, sizeof(Raw)) << std::endl;
		std::cout << "S1 Bits:  " << std::string(char_raw_data, 0, 8) << std::endl;
		std::cout << "N Bits:   " << *(reinterpret_cast<int*>(char_raw_data+8)) << std::endl;
		std::cout << "S2 Bits:  " << std::string(char_raw_data, 8+sizeof(int), 8) << std::endl;
	} catch(std::exception & e) {
		std::cerr << "Some BS exception was thrown. (" << e.what() << ")" << std::endl;
	}

	Data * clean_data = deserialize(raw_data);
	char * char_clean_data = reinterpret_cast<char*>(clean_data);
	std::string scrubbed_clean_data = "";

	try {
		for (int i=0;i<static_cast<int>(sizeof(Data));i++) {
			if (char_clean_data[i] == '\0')
				scrubbed_clean_data.append(1, '0');
			else
				scrubbed_clean_data.append(1, char_clean_data[i]);
		}
		std::cout << std::endl << "::Unserialized Data::" << std::endl;
		std::cout << "Size:     " << sizeof(Data) << std::endl;
		std::cout << "All Bits: " << scrubbed_clean_data << std::endl;
		std::cout << "S1:       " << clean_data->s1 << std::endl;
		std::cout << "N:        " << clean_data->n  << std::endl;
		std::cout << "S2:       " << clean_data->s2 << std::endl;
	} catch( std::exception & e ) {
		std::cerr << "Some BS exception was thrown. (" << e.what() << ")" << std::endl;
	}

	delete reinterpret_cast<Raw*>(raw_data);
	delete clean_data;

	return 0;
}
