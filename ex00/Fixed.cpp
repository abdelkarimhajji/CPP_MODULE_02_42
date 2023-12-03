/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:15:56 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/03 12:19:03 by ahajji           ###   ########.fr       */
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
    this->value = copy.value;
    std::cout << "Copy constructor called" << std::endl;
}

void Fixed::set(int value)
{
    this->value = value;
}

void Fixed::print()
{
    std::cout << this->value << "\n";
}
Fixed& Fixed::operator=(const Fixed& other) {
 this->value = other.value;
 std::cout << "Copy assignment operator called" << std::endl;
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