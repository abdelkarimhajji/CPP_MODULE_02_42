/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:15:56 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/02 11:12:05 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
}
Fixed::Fixed(Fixed &copy)
{
    this->value = copy.value;
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
 return *this;
 }