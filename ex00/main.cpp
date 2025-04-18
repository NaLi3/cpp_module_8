/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:13:00 by ilevy             #+#    #+#             */
/*   Updated: 2025/04/18 13:26:05 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	std::vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(99);
	std::vector<int>::iterator it = easyfind(vec, 20);
	std::cout << "Found: " << *it << std::endl;
	std::vector<int>::iterator inty = easyfind(vec, 99);
	std::cout << "Found: " << *inty << std::endl;

	return (0);
}
