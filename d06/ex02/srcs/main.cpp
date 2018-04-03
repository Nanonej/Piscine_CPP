/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 15:48:53 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/03 16:13:25 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base {

public:
	virtual ~Base(){}

};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*generate() {

	switch (rand() % 3) {
		case 1:
			return (new A());
			break;
		case 2:
			return (new B());
		 	break;
		default:
			return (new C());
			break;
	}
}

void	identify_from_pointer(Base *p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
			std::cout << "C" << std::endl;
	}
}

void	identify_from_reference(Base & p) {
	identify_from_pointer(&p);
}

int		main() {

	srand(time(NULL));

	Base *b;
	for (size_t i = 0; i < 20; i++) {
		b = generate();
		std::cout << "from pointer : ";
		identify_from_pointer(b);
		std::cout << "from ref : ";
		identify_from_reference(*b);
		std::cout << std::endl;
	}

	return 0;
}
