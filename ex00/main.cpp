/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:13:18 by ahajji            #+#    #+#             */
/*   Updated: 2023/12/03 10:35:15 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    int i;
    Fixed test;
    Fixed test2;
   
    test.set(5);
    test2 = test;
    test2.print();
    test.set(6);
    test2.print();
    return 0;
}