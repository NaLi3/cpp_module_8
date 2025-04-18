/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:12:57 by ilevy             #+#    #+#             */
/*   Updated: 2025/04/18 13:22:49 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <list>

template <typename T>
typename T::iterator easyfind(T& container, int value)
{
	typename T::iterator result;

	result = std::find(container.begin(), container.end(), value);
	if (result == container.end())
	{
		std::cout << "Value not found in container" << std::endl;
	}
	return (result);
}

#endif
