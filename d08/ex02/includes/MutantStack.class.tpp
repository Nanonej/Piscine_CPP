/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.class.tpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 12:43:24 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/06 12:58:18 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CLASS_TPP
# define MUTANTSTACK_CLASS_TPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {

public:

	typedef typename std::deque<T>::iterator iterator;

	MutantStack();
	MutantStack(MutantStack const & src);
	virtual ~MutantStack();

	MutantStack &	operator=(MutantStack const & rhs);

	MutantStack<T>::iterator begin();
	MutantStack<T>::iterator end();

private:

};

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

template <typename T> MutantStack<T>::MutantStack() {}

template <typename T> MutantStack<T>::MutantStack(MutantStack<T> const & src) {
	*this = src;
}

template <typename T> MutantStack<T>::~MutantStack() {}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

template <typename T> MutantStack<T> &	MutantStack<T>::operator=(MutantStack<T> const & rhs) {

	std::stack<T>::operator=(rhs);
	return *this;
}

// ------------------------------ MEMBER FUNCTION ------------------------------

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return this->c.begin();
}

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::end() {
	return this->c.end();
}

// -----------------------------------------------------------------------------

#endif
