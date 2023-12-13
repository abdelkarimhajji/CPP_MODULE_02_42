/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:28:38 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/13 12:09:41 by ahajji           ###   ########.fr       */
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
    std::cout << "Float contructer called" << std::endl;
    this->value = float_number * static_cast<int>(pow(2, this->fractionalBits));
}

Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = integer * static_cast<int>(pow(2, this->fractionalBits));
}

Fixed::Fixed(Fixed const &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

void Fixed::set(int value)
{
    this->value = value;
}

float Fixed::toFloat( void ) const
{
    return (this->value / static_cast<float>(pow(2, this->fractionalBits)));
}

int Fixed::toInt( void ) const
{
    return (this->value / static_cast<int>(pow(2, this->fractionalBits)));
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = other.getRawBits();
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fi)
{
    os << fi.toFloat();
    return os;
}

int Fixed::getRawBits( void ) const
{
    return this->value;
}

void Fixed::setRawBits( int const raw )
{
    this->value  =  raw;
}