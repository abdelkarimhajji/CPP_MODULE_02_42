/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:28:38 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/12 11:56:06 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Fixed.hpp"
#include <cmath>
Fixed::Fixed()
{
    this->value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const float float_number)
{
    this->value = float_number * static_cast<int>(pow(2, this->fractionalBits));
}

Fixed::Fixed(const int integer)
{
    this->value = integer * static_cast<int>(pow(2, this->fractionalBits));
}

Fixed::Fixed(Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->value = copy.getRawBits();
}

void Fixed::set(int value)
{
    this->value = value;
}

void Fixed::print()
{
    // this->value = value >> this->fractionalBits;
    std::cout << this->value  << "\n";
}

Fixed& Fixed::operator=(const Fixed& other) {
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