/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:18:39 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/09 17:29:35 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CONTACT_HPP
#define  CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
	private:
		//Atributes (Variables)
		//Only accessible inside th class
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darkest_secret;
	public:
		//Methods (functions)
		//Can be used from outside the class
		std::string		get_firstname() const;
		std::string		get_lastname() const;
		std::string		get_nickname() const;
		std::string		get_phonenumber() const;
		std::string		get_darkestsecret() const;
		

		void	set_firstname(const std::string& name);
		void	set_lastname(const std::string& l_name);
		void	set_nickname(const std::string& nick_name);
		void	set_phonenumber(const std::string& phone_number);
		void	set_darkestsecret(const std::string& darkestsecret);
};



#endif