/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:54:32 by ilevy             #+#    #+#             */
/*   Updated: 2025/04/20 13:21:02 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <iterator>
# include <vector>
# include <unistd.h>
# include <string.h>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_container;
	public:
		Span( void );
		Span( const unsigned int N );
		Span( const Span& copy );
		Span& operator=( const Span& src );
		~Span( void );

		void	addNumber( int new_number );
		int		shortestSpan( void );
		int		longestSpan( void );

		class ContainerFull: public std::exception
		{
			public:
				char const *what() const throw();
		};
		class ContainerEmpty: public std::exception
		{
			public:
				char const *what() const throw();
		};
		class SingleElementInContainer: public std::exception
		{
			public:
				char const *what() const throw();
		};
};

#endif
