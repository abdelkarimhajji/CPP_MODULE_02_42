/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:28:36 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/14 12:35:03 by ahajji           ###   ########.fr       */
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
    bool  operator<(const Fixed &other);
    bool  operator>(const Fixed &other);
    bool  operator<=(const Fixed &other);
    bool  operator>=(const Fixed &other);
    bool  operator==(const Fixed &other);
    bool  operator!=(const Fixed &other);
    Fixed   operator+(const Fixed &other);
    Fixed   operator-(const Fixed &other);
    Fixed   operator*(const Fixed &other);
    Fixed   operator/(const Fixed &other);
    Fixed   &operator++(void);
    Fixed   &operator--(void);
    Fixed   operator--(int);
    Fixed   operator++(int);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    static  Fixed &min(Fixed &fix1, Fixed &fix2);
    static const Fixed &min(const Fixed &fix1, const Fixed &fix2);
    static  Fixed &max(Fixed &fix1, Fixed &fix2);
    static const Fixed &max(const Fixed &fix1, const Fixed &fix2);
};