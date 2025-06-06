/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shehanihansika <shehanihansika@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:18:55 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/05 14:37:01 by shehanihans      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PHONEBOOK_HPP
#define		PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <string>
#include <cctype>

class 	 PhoneBook{
	private:
		Contact		contacts[8];
		int			current_index;
		int			total_contacts;

	public:
		PhoneBook();
		void	add_contacts();
		void    add_firstname();
		void    add_lastname();
		void    add_nickname();
		void	add_phonenumber();
		void    add_darkest_secret();
		void	search();
};


#endif