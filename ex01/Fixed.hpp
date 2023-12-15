/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:28:36 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/15 15:25:55 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
  private:
    int value;
    static int const fractionalBits = 8;

  public:
    Fixed();
    Fixed(Fixed const &copy);
    Fixed& operator=(const Fixed& other);
    ~Fixed();
    Fixed(const int integer);
    Fixed(const float float_number);
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& os, const Fixed& fi);

