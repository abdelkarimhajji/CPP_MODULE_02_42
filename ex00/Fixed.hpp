/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:15:53 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/02 11:12:18 by ahajji           ###   ########.fr       */
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
    Fixed(Fixed &copy);
    void set(int value);
    void print();
    Fixed& operator=(const Fixed& other) ;
};