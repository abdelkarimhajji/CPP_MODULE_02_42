/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:28:36 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/13 12:00:50 by ahajji           ###   ########.fr       */
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
    ~Fixed();
    Fixed(Fixed const &copy);
    Fixed(const int integer);
    Fixed(const float float_number);
    float toFloat( void ) const;
    int toInt( void ) const;
    void set(int value);
    void print();
    Fixed& operator=(const Fixed& other);
    friend std::ostream& operator<<(std::ostream& os, const Fixed& fi);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};