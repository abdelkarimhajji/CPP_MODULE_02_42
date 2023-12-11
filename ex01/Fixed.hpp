/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:28:36 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/10 11:58:31 by ahajji           ###   ########.fr       */
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
    Fixed(Fixed &copy);
    Fixed(const int integer);
    void set(int value);
    void print();
    Fixed& operator=(const Fixed& other);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};