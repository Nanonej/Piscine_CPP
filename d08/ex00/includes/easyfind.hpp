/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 09:31:11 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/05 10:13:06 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

#include <algorithm>

template <typename T> int	easyfind(T cont, int n) {

	if (find(cont.begin(), cont.end(), n) != cont.end()) {
		return 1;
	}

	return 0;
}

#endif
