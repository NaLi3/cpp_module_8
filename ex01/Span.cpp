/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:54:26 by ilevy             #+#    #+#             */
/*   Updated: 2025/04/20 13:54:46 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void )
{
	this->_N = 0;
	std::cout << "Default constructor called" << std::endl;
}

Span::Span( const unsigned int N )
{
	this->_N = N;
	std::cout << "Paremeterized constructor called" << std::endl;
}

Span::Span( const Span& copy )
{
	this->_N = copy._N;
	this->_container = copy._container;
	std::cout << "Copy constructor called" << std::endl;
}

Span&	Span::operator=( const Span& src )
{
	this->_N = src._N;
	this->_container = src._container;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Span::~Span( void )
{
	std::cout << "Destructor called" << std::endl;
}

void	Span::addNumber( int new_number )
{
	if ( this->_container.size() == this->_N )
		throw Span::ContainerFull();
	this->_container.push_back(new_number);
}

int		Span::shortestSpan( void )
{
	if (this->_container.empty())
		throw Span::ContainerEmpty();
	if (this->_container.size() == 1)
		throw Span::SingleElementInContainer();
	else
	{
		std::vector <int> copy = this->_container;
		std::sort(copy.begin(), copy.end(), std::less<int>());
		return (*copy.begin());
	}
}

int		Span::longestSpan( void )
{
	if (this->_container.empty())
		throw Span::ContainerEmpty();
	if (this->_container.size() == 1)
		throw Span::SingleElementInContainer();
	else
	{
		std::vector <int> copy = this->_container;
		std::sort(copy.begin(), copy.end(), std::greater<int>());
		return (*copy.begin());
	}
}

int		randInt( unsigned int N )
{
	int	i;

	i = rand() % N + 1;
	return (i);
}

void	Span::fillContainer( void )
{
	unsigned int	start;

	start = this->_container.size();
	while (start < this->_N)
	{
		this->addNumber(randInt(this->_N));
		start++;
	}
}

char const* Span::ContainerEmpty::what() const throw()
{
	return ("This container's empty");
}

char const* Span::ContainerFull::what() const throw()
{
	return ("This container's full");
}

char const* Span::SingleElementInContainer::what() const throw()
{
	return ("This container contains only one element");
}
