/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:18:45 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/03 15:44:56 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

//.................setterfunctions...........................//

void	Contact::set_firstname(const std::string& name)
{
	firstname = name;
}
void	Contact::set_lastname(const std::string& l_name)
{
	lastname = l_name;
}

void	Contact::set_nickname(const std::string& nick_name)
{
	nickname = nick_name;
}

void	Contact::set_phonenumber(const std::string& phone_number)
{
	phonenumber = phone_number;
}
void	Contact::set_darkestsecret(const std::string& darkestsecret)
{
	darkest_secret = darkestsecret;
}



//.................getterfuntions............................//

std::string		Contact::get_firstname() const {
	return firstname;
}

std::string		Contact::get_lastname() const {
	return lastname;
}

std::string		Contact::get_nickname() const {
	return nickname;
}

std::string		Contact::get_phonenumber() const {
	return phonenumber;
}

std::string		Contact::get_darkestsecret() const {
	return darkest_secret;
}

