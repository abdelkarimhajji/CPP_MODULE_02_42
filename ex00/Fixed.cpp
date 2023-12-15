/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:15:56 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/15 09:55:26 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
    std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->value = copy.getRawBits();
}



Fixed& Fixed::operator=(const Fixed &other) {
 std::cout << "Copy assignment operator called" << std::endl;
 this->value = other.getRawBits();
 return *this;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits( int const raw )
{
    this->value  =  raw;
}
