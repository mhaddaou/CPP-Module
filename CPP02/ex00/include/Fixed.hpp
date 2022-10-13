/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:16:37 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/12 10:37:50 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed{
    private:
        int fixedPoint; // integer fixed point
        static const int _staticPoint;
    public:
        Fixed(); // default constructor
        Fixed (Fixed &obj); // copy constractor
        Fixed& operator=(const Fixed& obj); // assingnement operator
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

# endif