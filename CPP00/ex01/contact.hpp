/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:13:05 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/10/07 11:57:54 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP


#include <iostream>
#include <string>

class Contact{
    public:
        Contact();
        int setFirstName(void);
        int setLastName(void);
        int setNickName(void);
        int setPhoneNumber(void);
        int setDarkestSecret(void);
        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickName(void);
        std::string getPhoneNumber(void);
        std::string getDarckestSecret(void);
        ~Contact();
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
};
#endif